if __name__ == '__main__':
    N = int(input())
    a_list = list(map(int, input().split()))

    a_list = sorted(a_list, reverse=True)

    answer = 0
    for i in range(len(a_list)):
        if i % 2 == 0:
            if i + 1 <= len(a_list) - 1:
                answer += a_list[i] - a_list[i+1]
            else:
                answer += a_list[i]

    print(answer)

