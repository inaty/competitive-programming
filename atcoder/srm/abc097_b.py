def isqrt(n):
    x = n
    y = (x + 1) // 2
    while y < x:
        x = y
        y = (x + n // x) // 2
    return x

if __name__ == '__main__':
    X = int(input())

    answer = -1
    for i in range(isqrt(X)+1):
        if i**2 <= X:
            answer = max(answer,i**2)

    print(answer)
