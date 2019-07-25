if __name__ == '__main__':
    S = int(input())

    x0 = 0
    x1 = 10**9
    x2 = 1
    y0 = 0
    y2 = (S + x1 - 1)//x1
    y1 = x1 * y2 - S

    print(str(x0) + ' ' + str(y0) + ' ' + str(x1) + ' ' + str(y1) + ' ' + str(x2) + ' ' + str(y2))