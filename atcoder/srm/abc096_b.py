if __name__ == '__main__':
    a, b, c = map(int, input().split())
    k = int(input())

    answer = -1
    for i in range(k):
        if a == max(a,b,c):
            a = 2*a
        elif b == max(a,b,c):
            b = 2*b
        elif c == max(a,b,c):
            c = 2*c

    answer = a + b + c
    print(answer)
