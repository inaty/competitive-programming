if __name__ == '__main__':
    N= int(input())
    A_list = list(map(int, input().split()))

    min_A = min(A_list)
    max_A = max(A_list)

    print(max_A - min_A)
