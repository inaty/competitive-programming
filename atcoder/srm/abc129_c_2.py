import sys

sys.setrecursionlimit(100000)

MOD = 1000000007


def step_state(n, broken):
    if n == 0:
        return 1
    elif n == 1:
        if broken[1]:
            return 0
        else:
            return 1
    else:
        if broken[n - 1] and broken[n - 2]:
            return 0
        elif broken[n - 1]:
            return step_state(n-2, broken) % MOD
        elif broken[n-2]:
            return step_state(n-1, broken) % MOD
        else:
            return (step_state(n-1, broken)+step_state(n-2, broken)) % MOD


if __name__ == '__main__':
    n, m = map(int, input().split())
    a = set([int(input()) for i in range(m)])
    broken = [False] * (n+1)
    for i in range(n+1):
        if i in a:
            broken[i] = True

    answer = step_state(n, broken)

    print(answer)
