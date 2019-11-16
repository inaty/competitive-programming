if __name__ == '__main__':
    n = int(input())
    p = list(map(int,input().split()))

    answer = 0
    for l in range(n-1):
        for r in range(l+1,n):
            answer += sorted(p[l:r+1])[-2]
    print(answer)
