if __name__ == '__main__':
    A, B, K = map(int, input().split())

    answer = 1
    cnt = 0
    for i in range(min(A, B), 1, -1):
        if A % i == 0 and B % i == 0:
            cnt += 1
        if cnt == K:
            answer = i
            break

    print(answer)
