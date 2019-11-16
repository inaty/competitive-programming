import sys


if __name__ == '__main__':
    N = int(input())
    W = list(map(int, input().split()))

    min_diff = sys.maxsize
    for i in range(1, N):
        T = i
        wt = W[T-1]
        S1 = 0
        S2 = 0
        for j in range(0, N):
            if j+1 <= T:
                S1 += W[j]
            if j+1 > T:
                S2 += W[j]
        min_diff = min(min_diff, abs(S1-S2))

    print(min_diff)

