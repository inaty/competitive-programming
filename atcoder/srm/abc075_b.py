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

    for i in range(H):
        for j in range(W):
            if answer[i][j] ==  '.':
                answer[i][j] = str(SS[i][j] + SS[i+1][j] + SS[i+2][j] + SS[i][j+1] + SS[i+2][j+1] + SS[i][j+2] + SS[i+1][j+2] + SS[i+2][j+2])

    for i in range(H):
        print("".join(answer[i]))


