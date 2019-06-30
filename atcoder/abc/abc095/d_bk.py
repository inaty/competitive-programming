import math
import sys


if __name__ == '__main__':
    n = int(input())
    a_list = list(map(int, input().split()))

    max_comb = - sys.maxsize
    answer1 = -1
    answer2 = -1
    for i in range(n):
        for j in range(n):
            if i == j:
                continue
            if a_list[i] < a_list[j]:
                continue
            comb = math.factorial(a_list[i])/(math.factorial(a_list[j]) * math.factorial(a_list[i] - a_list[j]))

            if max_comb < comb:
                max_comb = comb
                answer1 = a_list[i]
                answer2 = a_list[j]

    print(str(answer1) + " " + str(answer2))

