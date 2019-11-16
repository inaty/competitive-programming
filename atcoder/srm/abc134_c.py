if __name__ == '__main__':
    N = int(input())
    A = [int(input()) for _ in range(N)]

    sorted_A = sorted(A)

    max_A = sorted_A[-1::][0]
    next_max_A = sorted_A[-2:-1:][0]

    for i in range(N):
        if A[i] == max_A:
            print(next_max_A)
        else:
            print(max_A)

