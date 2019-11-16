if __name__ == '__main__':
    N = int(input())

    L_list = list(map(int, input().split()))

    max_L = max(L_list)

    sum_L = 0
    for L in L_list:
        sum_L += L

    if max_L < sum_L - max_L:
        print('Yes')
    else:
        print('No')


