if __name__ == '__main__':
    A, B, C = map(int, input().split())

    if B >= A * C:
        answer = C
    else:
        answer = B // A

    print(answer)
