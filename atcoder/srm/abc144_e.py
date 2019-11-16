if __name__ == '__main__':
    n, k = map(int,input().split())
    a = list(map(int,input().split()))
    f = list(map(int,input().split()))

    a = sorted(a, reverse=True)
    f = sorted(f)

    af = [[a[i] * f[i], a[i], f[i]] for i in range(n)]

    af = sorted(af, key=lambda x: x[0], reverse=True)



