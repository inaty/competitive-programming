import bisect

if __name__ == '__main__':
    n = int(input())
    l = list(map(int,input().split()))

    l = sorted(l)

    answer = 0
    for i in range(0,n):
        for j in range(i+1,n):
            k = bisect.bisect_left(l, l[i]+l[j])
            answer += max(0,k-(j+1))

    print(answer)
