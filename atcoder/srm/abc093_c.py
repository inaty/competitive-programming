if __name__ == '__main__':
    A, B, C = map(int, input().split())

    D = min(A, B, C)

    A -= D
    B -= D
    C -= D



