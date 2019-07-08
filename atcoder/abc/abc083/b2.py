def sum_digit(N):
    res = N%10
    while N//10 > 0:
        N = N//10
        res += N%10
    return res


if __name__ == '__main__':
    N, A, B = map(int, input().split())

    answer = 0
    for i in range(1,N+1):
        if A <= sum_digit(i) <= B:
            answer += i
    print(answer)
