if __name__ == '__main__':
    N = int(input())
    A_list = list(map(int, input().split()))

    sum_x = sum(A_list)//2
    x1 = sum_x
    for i in range(2, N, 2):
        x1 -= A_list[i-1]

    x_list = [-1] * N
    x_list[0] = x1
    for i in range(N-1):
        x_list[i+1] = A_list[i] - x_list[i]

    answer = ' '.join([str(2*x) for x in x_list])
    print(answer)
