if __name__ == '__main__':
    h, w = map(int,input().split())
    a = [list(input()) for i in range(h)]

    while True:
        l = []
        column_same = False
        row_same = False
        for i in range(len(a)):
            if all(a[i][j] == "." for j in range(len(a[0]))) or all(a[i][j] == "#" for j in range(len(a[0]))) :
                column_same = True
                for k in range(len(a[0])):
                    if k != i:
                        l.append(a[k])
                break
        if column_same == False:
            for j in range(len(a[0])):
                tmp1 = all(a[i][j] == "." for i in range(len(a)))
                tmp2 = all(a[i][j] == "#" for i in range(len(a)))
                if all(a[i][j] == "." for i in range(len(a))) or all(a[i][j] == "#" for i in range(len(a))):
                    row_same = True
                    for ii in range(len(a)):
                        tmp = []
                        for jj in range(len(a[0])):
                            if jj != j:
                                tmp.append(a[ii][jj])
                        l.append(tmp)
                    break

        if column_same == False and row_same == False:
            break
        else:
            a = l
            print(a)

    for i in range(len(a)):
        print("".join(a[i]))



