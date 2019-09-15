if __name__ == '__main__':
    n,m = map(int, input().split())
    a_list = list(map(int, input().split()))
    a_list = sorted(a_list, reverse=True)

    search_range = 1
    while m > 0:
        max_index = a_list[0:search_range].index(max(a_list[0:search_range]))
        a_list[max_index] = a_list[max_index] // 2
        m -= 1
        search_range += 1

    answer = sum(a_list)
    print(answer)

