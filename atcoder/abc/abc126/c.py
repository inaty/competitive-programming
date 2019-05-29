import math


if __name__ == '__main__':
    N, K = map(int, input().split())

    answer = 0
    for A1 in range(1, N+1):
        if A1 >= K:
            answer += 1.0 / N
        else:
            k = math.ceil(math.log2(K/A1))
            answer += 1.0 / N * math.pow(0.5, k)
    print(answer)

