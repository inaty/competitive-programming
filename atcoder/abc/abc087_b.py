if __name__ == '__main__':
    A = int(input())
    B = int(input())
    C = int(input())
    X = int(input())

    answer = 0
    for i in range(A+1):
        for j in range(B+1):
            for k in range(C+1):
                if X == 500 * i + 100 * j + 50 * k:
                    answer += 1
    print(answer)
