import itertools
import sys


if __name__ == '__main__':
    D, G = map(int, input().split())
    # pc_list = [list(map(int,input().split())) for i in range(D)]

    p = ['-1'] * D
    c = ['-1'] * D

    for i in range(D):
        p[i], c[i] = map(int, input().split())

    if D == 1:
        my_list = list(itertools.product(range(p[0]+1)))
    elif D == 2:
        my_list = list(itertools.product(range(p[0]+1),range(p[1]+1)))
    elif D == 3:
        my_list = list(itertools.product(range(p[0]+1),range(p[1]+1), range(p[2]+1)))
    elif D == 4:
        my_list = list(itertools.product(range(p[0]+1),range(p[1]+1), range(p[2]+1), range(p[3]+1)))
    elif D == 5:
        my_list = list(itertools.product(range(p[0]+1),range(p[1]+1), range(p[2]+1), range(p[3]+1), range(p[4]+1)))
    elif D == 6:
        my_list = list(itertools.product(range(p[0]+1),range(p[1]+1), range(p[2]+1), range(p[3]+1), range(p[4]+1), range(p[5]+1)))
    elif D == 7:
        my_list = list(itertools.product(range(p[0]+1),range(p[1]+1), range(p[2]+1), range(p[3]+1), range(p[4]+1), range(p[5]+1), range(p[6]+1)))
    elif D == 8:
        my_list = list(itertools.product(range(p[0]+1),range(p[1]+1), range(p[2]+1), range(p[3]+1), range(p[4]+1), range(p[5]+1), range(p[6]+1), range(p[7]+1)))
    elif D == 9:
        my_list = list(itertools.product(range(p[0]+1),range(p[1]+1), range(p[2]+1), range(p[3]+1), range(p[4]+1), range(p[5]+1), range(p[6]+1), range(p[7]+1), range(p[8]+1)))
    elif D == 10:
        my_list = list(itertools.product(range(p[0]+1),range(p[1]+1), range(p[2]+1), range(p[3]+1), range(p[4]+1), range(p[5]+1), range(p[6]+1), range(p[7]+1), range(p[8]+1), range(p[9]+1)))

    min_count = sys.maxsize
    for e in my_list:
        e_list = list(e)
        score = 0
        for i in range(len(e_list)):
            score += (i+1)*100*e_list[i]
            if e[i] == p[i]:
                score += c[i]
        count = sum(e_list)
        if score >= G and min_count > count:
            min_count = count
    print(min_count)




