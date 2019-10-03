if __name__ == '__main__':
    N = int(input())
    d_list = [int(input()) for i in range(N)]

    d_list = list(set(d_list))

    print(len(d_list))
