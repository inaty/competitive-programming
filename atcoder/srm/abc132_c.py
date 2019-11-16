import statistics


if __name__ == '__main__':
    N = int(input())
    d_list = list(map(int, input().split()))

    med_low = statistics.median_low(d_list)
    med_high = statistics.median_high(d_list)

    if med_high == med_low:
        answer = 0
    else:
        answer = med_high - med_low

    print(answer)

