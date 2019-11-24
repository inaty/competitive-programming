import itertools
import math


if __name__ == '__main__':
    n = int(input())
    xy = [list(map(int,input().split())) for i in range(n)]

    sum_length = 0.0
    sum_count = 0

    seq = list(range(0,n))
    for e in itertools.permutations(seq):
        sum_count += 1
        count = 0
        for i in list(e):
            if (count==n-1):
                continue
            # print(i)
            # print(i)
            if (i+1<=n-1):
                sum_length += math.sqrt((xy[i][0]-xy[i+1][0])*(xy[i][0]-xy[i+1][0]) + (xy[i][1]-xy[i+1][1])*(xy[i][1]-xy[i+1][1]))
            else:
                sum_length += math.sqrt((xy[i][0] - xy[0][0]) * (xy[i][0] - xy[0][0]) + (xy[i][1] - xy[0][1]) * (xy[i][1] - xy[0][1]))
            count += 1
        break

    answer = sum_length/ (sum_count * 1.0)
    print(answer)

