if __name__ == '__main__':
    input_list = list(map(int, input().split()))
    N = input_list[0]
    M = input_list[1]

    A = [0]*N
    B = [0]*N
    AB

    for i in range(N):
        A[i], B[i] = map(int, input().split())

    for i in range(N):
        if i == 0:
            prices = [A[0]]*B[0]
        else:
            prices.extend([A[i]]*B[i])

    sorted_A = sorted(A)
    sorted_A_index = sorted(range(len(A)), key=lambda k: A[k])

    print(sorted_A)
    print(sorted_A_index)

    answer = 0

    for i in range(M):
        min_index =
        answer += sorted_A[i]

    # print(answer)
