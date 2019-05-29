if __name__ == '__main__':
    N, M, X, Y = map(int, input().split())
    x_list = list(map(int, input().split()))
    y_list = list(map(int, input().split()))

    x_max = max(x_list)
    y_min = min(y_list)

    if x_max + 1 <= y_min and X <= x_max and y_min <= Y:
        print("No War")
    else:
        print("War")

