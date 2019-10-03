if __name__ == '__main__':
    N = int(input())
    a_list = list(map(int, input().split()))

    a_list = sorted(a_list, reverse=True)

    print(sum(a_list[0::2])-sum(a_list[1::2]))

