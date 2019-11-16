import copy
from functools import reduce
import fractions

def gcd(a, b):
    return fractions.gcd(a,b)

def gcd_list(numbers):
    return reduce(gcd, numbers)

if __name__ == '__main__':
    N = int(input())
    A_list = list(map(int, input().split()))

    answer = 0

    for i in range(0, len(A_list)-1):
        A_list_copy = copy.deepcopy(A_list)
        A_list_copy.pop(i)

        gcd_number = gcd_list(A_list_copy)

        if answer < gcd_number:
            answer = gcd_number

    if len(A_list) == 1:
        answer = pow(10, 9)

    print(answer)
