import math

""""
C - Five Transportations
https://atcoder.jp/contests/abc123/tasks/abc123_c
"""
if __name__ == '__main__':
    n = int(input())
    a = int(input())
    b = int(input())
    c = int(input())
    d = int(input())
    e = int(input())

    bottle_neck = min(a, b, c, d, e)
    ans = math.ceil(N / bottle_neck) + 4

    print(ans)
