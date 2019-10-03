def calc_sum_digit(N):
    sum_digit = 0
    while N > 0:
        sum_digit += N%10
        N = N//10
    return sum_digit


if __name__ == '__main__':
    N, A, B = map(int, input().split())

    answer = 0
    for i in range(1, N+1):
        sum_digit = calc_sum_digit(i)
        if A <= sum_digit <= B:
            answer += i

    print(answer)
