if __name__ == '__main__':
    N = int(input())
    p = list(map(int, input().split()))

    origin = list(range(1,N+1))

    count = 0
    for i in range(N):
        if p[i] != origin[i]:
            count+=1

    if count == 2 or count == 0:
        print("YES")
    else:
        print("NO")

