if __name__ == '__main__':
    n,m = map(int, input().split())
    a_list = list(map(int, input().split()))
    a_list = sorted(a_list, reverse=True)

    while m > 0:
        max_index = a_list.index(max(a_list))
        a_list[max_index] = a_list[max_index] // 2
        m-=1

    answer = sum(a_list)
    print(answer)

