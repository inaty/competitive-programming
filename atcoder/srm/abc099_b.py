if __name__ == '__main__':
    a, b = map(int, input().split())

    n = b - a

    L_east = 0
    for i in range(1, n+1):
        L_east += i

    answer = L_east - b

    print(answer)
