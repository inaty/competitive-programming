import math


if __name__ == '__main__':
    N = int(input())

    answer = 0
    while N >= 0:
        max_price = 0
        n_pow_9 = 0
        while pow(9, n_pow_9) <= N:
            n_pow_9 += 1
        n_pow_9 -= 1

        n_pow_6 = 0
        while pow(6, n_pow_6) <= N:
            n_pow_6 += 1
        n_pow_6 -= 1

        max_price = max(pow(9,n_pow_9), pow(6,n_pow_6),1)

        print(N)
        print(max_price)
        print("----------------")

        N -= max_price
        if N >= 0:
            answer += 1
        else:
            break

    print(answer)


