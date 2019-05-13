def calc_a(i, s):
    if i == 1:
        return s
    else:
        return f(calc_a(i-1, s))


def f(n):
    if n % 2 ==0:
        return int(n /2)
    else:
        return int(3 * n + 1)


if __name__ == '__main__':
    S = int(input())

    an_list = []

    for m in range(1, 1000001):
        am = calc_a(m, S)
        if am in an_list:
            break
        else:
            an_list.append(am)

    answer = m
    print(answer)

