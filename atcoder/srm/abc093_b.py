if __name__ == '__main__':
    A, B, K = map(int, input().split())

    answer = []
    for i in range(K):
        n = A + i
        if n <= B:
            answer.append(n)
        m = B - i
        if A <= m:
            answer.append(m)
    answer = sorted(list(set(answer)))

    for i in range(len(answer)):
        print(answer[i])


