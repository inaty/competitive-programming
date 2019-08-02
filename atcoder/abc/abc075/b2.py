if __name__ == '__main__':
    H, W = map(int, input().split())
    S = [list(input()) for i in range(H)]

    SS = [[0 for i in range(W+2)] for j in range(H+2)]


    for i in range(H):
        for j in range(W):
            if S[i][j] == '#':
                # pass
                SS[i+1][j+1] = 1

    answer = S.copy()

    dx = [0,1,2,0,2,0,1,2]
    dy = [0,0,0,1,1,2,2,2]

    for i in range(H):
        for j in range(W):
            if answer[i][j] ==  '.':
                tmp = 0
                for k in range(8):
                    x = j + dx[k]
                    y = i + dy[k]
                    tmp += SS[y][x]
                answer[i][j] = str(tmp)

    for i in range(H):
        print("".join(answer[i]))

