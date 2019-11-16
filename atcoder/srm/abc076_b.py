if __name__ == '__main__':
    N = int(input())
    K = int(input())

    answer = 1
    for i in range(N):
        answer = min(answer*2, answer+K)

    print(answer)

