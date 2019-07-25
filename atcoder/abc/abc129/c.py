import sys

sys.setrecursionlimit(100000)

def calc_state_number(stair_num, now_stair, damaged_step_set, memo):
    print(str(now_stair) + '/' + str(stair_num))
    if memo[now_stair-1] != -1:
        return memo[now_stair-1]
    if now_stair in damaged_step_set:
        memo[now_stair-1] = 0
        return memo[now_stair-1]
    if now_stair > stair_num:
        memo[now_stair-1] = 0
        return memo[now_stair-1]
    if now_stair == stair_num:
        memo[now_stair-1] = 1
        return memo[now_stair-1]
    if now_stair + 2 <= N:
        memo[now_stair-1] = (calc_state_number(stair_num, now_stair+1, damaged_step_set, memo) + calc_state_number(stair_num, now_stair+2, damaged_step_set, memo))%1000000007
    else:
        memo[now_stair-1] = (calc_state_number(stair_num, now_stair+1, damaged_step_set, memo))%1000000007
    return memo[now_stair-1]

if __name__ == '__main__':
    N, M = map(int, input().split())
    a = [int(input()) for _ in range(M)]
    a = sorted(a)

    memo = [-1] * (N*2)

    answer = 1
    if a[-1::] == N:
        answer = 0

    for i in range(1, M):
        if a[i-1] + 1 == a[i]:
            answer = 0

    if answer != 0:
        answer = calc_state_number(N, 0, set(a), memo)

    print(memo)
    print(answer)
