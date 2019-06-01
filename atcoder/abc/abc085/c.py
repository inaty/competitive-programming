if __name__ == '__main__':
    N, Y = map(int, input().split())

    answer = "-1 -1 -1"
    for i in range(N+1):
        for j in range(0, N-i+1):
            k = N - i - j
            if i*10000 + j*5000 + k*1000 == Y:
                answer = str(i) + " " + str(j) + " " + str(k)
                break

    print(answer)
