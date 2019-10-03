import collections


if __name__ == '__main__':
    n = int(input())
    a = list(map(int, input().split()))

    c = collections.Counter(a)

    l = 0
    w = 0

    max_num = -1
    for k,v in c.items():
        if max_num < k and v >= 2:
            max_num = k

    if max_num != -1:
        l = max_num
        c[max_num] = c[max_num] - 2

    max_num = -1
    for k, v in c.items():
        if max_num < k and v >= 2:
            max_num = k

    if max_num != -1:
        w = max_num
        c[max_num] = c[max_num] - 2

    print(l*w)

