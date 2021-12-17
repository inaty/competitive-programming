import sys
from functools import reduce


if __name__ == '__main__':
    n, k = map(int, input().split())
    p = list(map(int, input().split()))
    p = sorted(p)
    answer = reduce(lambda a,b : a+b, p[0:k])
    print(answer)
