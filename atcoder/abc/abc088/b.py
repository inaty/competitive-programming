if __name__ == '__main__':
    N = int(input())
    A_list = list(map(int, input().split()))

    A_list = sorted(A_list, reverse=True)

    odd_A_list = A_list[::2]
    even_A_list = A_list[1::2]

    print(sum(odd_A_list)-sum(even_A_list))


