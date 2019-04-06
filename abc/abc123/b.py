import sys
import itertools
import math

"""
B - Five Dishes
https://atcoder.jp/contests/abc123/tasks/abc123_b
"""


def order(order_list):
    t1 = math.ceil(order_list[0] / 10) * 10
    t2 = t1 + math.ceil(order_list[1] / 10) * 10
    t3 = t2 + math.ceil(order_list[2] / 10) * 10
    t4 = t3 + math.ceil(order_list[3] / 10) * 10
    t5 = t4 + order_list[4]
    return t5


if __name__ == '__main__':
    a = int(input())
    b = int(input())
    c = int(input())
    d = int(input())
    e = int(input())

    all_order = sorted([a, b, c, d, e])

    all_cases = list(itertools.permutations(all_order))

    min_time = sys.maxsize

    for e in all_cases:
        time = order(e)
        if time < min_time:
            min_time = time

    print(min_time)
