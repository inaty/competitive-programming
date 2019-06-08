import sys


sys.setrecursionlimit(1000000)


MAX_N = 100001

memo = [-1] * MAX_N


def f(n):
    # 残り金額が0なら引き出す必要がないので0(再帰の終端条件)
    if n == 0:
        return 0
    # すでに探索済みならメモを参照する
    if memo[n] != -1:
        return memo[n]

    res = sys.maxsize

    pow9 = 1
    while pow9 <= N:
        if n - pow9 < 0:
            break
        res = min(res, f(n-pow9)+1)
        pow9 *= 9


    pow6 = 1
    while pow6 <= N:
        if n - pow6 < 0:
            break
        res = min(res, f(n-pow6)+1)
        pow6 *= 6

    # メモ
    memo[n] = res

    return res


if __name__ == '__main__':
    N = int(input())

    print(f(N))


