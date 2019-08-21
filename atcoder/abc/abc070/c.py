import fractions
from functools import reduce


def lcm(a,b):
    return (a*b)//fractions.gcd(a,b)


def lcm_list(a):
    return reduce(lcm,a)


if __name__ == '__main__':
    n = int(input())
    t = [int(input()) for i in range(n)]

    print(lcm_list(t))
