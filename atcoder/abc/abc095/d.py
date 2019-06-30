import math
import sys


if __name__ == '__main__':
    n = int(input())
    a_list = list(map(int, input().split()))

    max_a = max(a_list)
    a_list.remove(max_a)

    min_diff = sys.maxsize
    answer1 = max_a
    answer2 = -1
    for i in range(n-1):
        diff = math.fabs(max_a/2 - a_list[i])
        if min_diff > diff:
            min_diff = diff
            answer2 = a_list[i]

    print(str(answer1) + " " + str(answer2))


