if __name__ == '__main__':
    n = int(input())
    d, x = map(int,input().split())
    a = [int(input()) for i in range(n)]

    answer = x
    for i in range(n):
        answer += 1 + (d-1)//a[i]

    print(answer)
