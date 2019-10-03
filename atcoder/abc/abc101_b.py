if __name__ == '__main__':
    N = int(input())

    sum_digit = 0
    tmp_N = N
    while tmp_N > 0:
        sum_digit += tmp_N % 10
        tmp_N = tmp_N//10

    if N % sum_digit == 0:
        print("Yes")
    else:
        print("No")
