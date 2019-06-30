if __name__ == '__main__':
    N, M, X = map(int, input().split())
    A_list = list(map(int, input().split()))

    answer1 = 0
    answer2 = 0
    for i in range(M):
        if X < A_list[i]:
            answer1 += 1
        if X > A_list[i]:
            answer2 += 1
    print(min(answer1, answer2))


