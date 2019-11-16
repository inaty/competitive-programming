if __name__ == '__main__':
    N = int(input())
    d_list = [int(input()) for i in range(N)]

    answer = len(list(set(d_list)))

    print(answer)
