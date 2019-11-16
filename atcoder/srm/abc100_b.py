if __name__ == '__main__':
    D, N = map(int, input().split())

    print((N + N//100) * pow(100, D))
