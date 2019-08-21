if __name__ == '__main__':
    n = int(input())
    v = list(map(float, input().split()))

    v = sorted(v)

    answer = (v[0] + v[1])/2.0
    for i in range(2, n):
        answer = (answer + v[i])/2.0

    print(answer)



