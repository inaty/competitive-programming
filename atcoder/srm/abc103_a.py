import itertools
import sys


if __name__ == '__main__':
    a = list(map(int,input().split()))
    a = sorted(a)

    answer = sys.maxsize
    for e in list(itertools.permutations(a)):
        a1, a2, a3 = e
        answer = min(answer, abs(a2-a1) + abs(a3-a2))
    print(answer)



