if __name__ == '__main__':
    N, K = map(int, input().split())
    ab_list = [list(map(int, input().split())) for _ in range(N-1)]

    divided_num = 1000000007

    

    for i in range(N):
        for j in range(N):
            if i == j:
                continue
            else:



