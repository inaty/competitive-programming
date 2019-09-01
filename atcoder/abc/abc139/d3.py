import itertools


def f(n):
    seq = list(range(1,n+1))
    answer1 = int(n*(n-1)/2)
    answer = answer1

    for e in list(itertools.permutations(seq, n)):
        elist = list(e)
        tmp = 0
        for i in range(n):
           tmp += seq[i]%elist[i]
        answer = max(answer,tmp)
    print(n)
    print(answer)
    print(answer1)
    print("=================")


if __name__ == '__main__':
    n = int(input())
    for i in range(n,n+1):
        f(i)
