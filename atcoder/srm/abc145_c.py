import itertools
import math


if __name__ == '__main__':
    n = int(input())
    xy = [list(map(int,input().split())) for i in range(n)]

    sum_length = 0.0
    sum_count = 0

    for i in itertools.permutations(range(n)):
        sum_count+=1
        for j in range(1,len(i)):
            sum_length += math.sqrt((xy[i[j-1]][0]-xy[i[j]][0])**2+(xy[i[j-1]][1]-xy[i[j]][1])**2)

    print(sum_length/sum_count)



