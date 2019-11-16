if __name__ == '__main__':
    N, K = map(int, input().split())
    A_list = list(map(int, input().split()))

    print(((N-1) + (K-1) -1)//(K-1))
