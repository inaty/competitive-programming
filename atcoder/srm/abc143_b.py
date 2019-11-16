if __name__ == '__main__':
    n = int(input())
    d = list(map(int,input().split()))

    answer = 0
    for i in range(n):
        for j in range(n):
           if i != j:
               answer += d[i] * d[j]

    print(answer//2)
