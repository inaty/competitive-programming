import math
import sys


if __name__ == '__main__':
    n = int(input())
    a_list = list(map(int, input().split()))

    max_a = max(a_list)
    a_list.remove(max_a)

    max_comb = - sys.maxsize
    answer1 = max_a
    answer2 = -1
    for i in range(n-1):
        comb = math.factorial(max_a)/(math.factorial(a_list[i]) * math.factorial(max_a - a_list[i]))
        if max_comb < comb:
            max_comb = comb
            answer2 = a_list[i]

    print(str(answer1) + " " + str(answer2))

