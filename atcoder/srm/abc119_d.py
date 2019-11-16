import bisect
import itertools
import sys


def most_simRL(ds, x):
    index = bisect.bisect_left(ds, x)
    if index == 0:
        return [ds[0]]
    elif index == len(ds):
        return [ds[-1]]
    return ds[index-1:index+1]

if __name__ == '__main__':
    A, B, Q = map(int, input().split())


    s_list = [-sys.maxsize] + [int(input()) for i in range(A)] + [sys.maxsize]
    t_list = [-sys.maxsize] + [int(input()) for i in range(B)] + [sys.maxsize]
    x_list = [int(input()) for i in range(Q)]


    for xi in x_list:
        s_RL = most_simRL(s_list, xi)
        t_RL = most_simRL(t_list, xi)

        answer = sys.maxsize

        for a, b in itertools.product(s_RL, t_RL):
            answer = min(answer, min(abs(xi-a), abs(xi-b)) + abs(a-b))

        print(answer)
