if __name__ == '__main__':
    S = list(input())

    cells = [1 for i in range(len(S))]
    print(cells)

    for i in range(10):
        for j in range(len(S)):
            if S[j] == 'R':
                cells[j+1] += cells[j]
                cells[j] = 0
            else:
                cells[j-1] += cells[j]
                cells[j] = 0
            # print(i)
            # print(S)
            print(cells)
            # print("---------------")



