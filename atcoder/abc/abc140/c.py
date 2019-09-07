if __name__ == '__main__':
    n = int(input())
    b = list(map(int,input().split()))

    a = [0] * n
    for i in range(n):
        if i == 0:
            a[i] =b[0]
        elif i == n-1:
            a[i] = b[n-2]
        else:
            a[i] = min(b[i-1],b[i])
    answer = sum(a)
    print(answer)

