if __name__ == '__main__':
    N = int(input())
    K = int(input())
    x = list(map(int, input().split()))

    answer = 0
    for i in range(N):
        answer += min(x[i], K-x[i]) * 2
    print(answer)


