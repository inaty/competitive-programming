if __name__ == '__main__':
    N, X = map(int, input().split())
    m = [int(input()) for i in range(N)]

    answer = N + (X - sum(m))//min(m)

    print(answer)




