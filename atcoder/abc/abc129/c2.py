import sys

sys.setrecursionlimit(1000000)

MAX_N = 100010
memo = [-1] * MAX_N

def f(n, na_set):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    elif n == 2:
        if len(set(na_set) & set([1])) == 1:
            return 1
        return 2
    # すでに探索済みならメモを参照する
    elif memo[n] != -1:
        return memo[n]
    else:
        is_next_damaged = False
        is_2next_damaged = False

        if len(set(na_set) & set([n-1])) == 1:
            is_next_damaged = True
        if len(set(na_set) & set([n-2])) == 1:
            is_2next_damaged = True
        if is_next_damaged == True and is_2next_damaged == False:
            res = f(n-2, a_list)
        if is_next_damaged == False and is_2next_damaged == True:
            res = f(n-1, a_list)
        if is_next_damaged == False and is_2next_damaged == False:
            res = f(n-1, a_list) + f(n-2, a_list)

    # メモ
    memo[n] = res
    return res

if __name__ == '__main__':
    N, M = map(int, input().split())
    a_list = [int(input()) for i in range(M)]
    na_set = set([N-a for a in a_list])

    divided_by = 1000000007

    answer = -1

    # まず移動方法がない場合を考える。
    min_diff = sys.maxsize
    for i in range(1, len(a_list)):
        min_diff = min(min_diff, a_list[i] - a_list[i - 1])

    if min_diff == 1:
        answer = 0
    else:
        # 何らかなの移動方法が必ず存在する場合
        answer = f(N, na_set)%divided_by

    print(answer)

