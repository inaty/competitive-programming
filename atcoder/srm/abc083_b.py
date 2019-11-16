if __name__ == '__main__':
    N, A, B = map(int, input().split())

    answer = 0
    for n in range(1, N + 1):
        sum_num = 0
        for i in range(1, len(str(n))+1):
            sum_num += int(str(n)[i-1])
        if A <= sum_num <= B:
            answer += n
    print(answer)
