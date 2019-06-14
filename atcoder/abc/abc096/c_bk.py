if __name__ == '__main__':
    H, W = map(int, input().split())
    s_list = [list(input()) for i in range(H)]

    answer = "Yes"
    for i in range(H):
        for j in range(W):
            if s_list[i][j] == "#" and answer == "Yes":

                if i == 0:
                    if j == 0:
                        if s_list[i][j+1] == "." and s_list[i+1][j] == ".":
                            answer = "No"
                            break
                    elif j == W-1:
                        if s_list[i][j-1] == "." and s_list[i+1][j] == ".":
                            answer = "No"
                            break
                    else:
                        if s_list[i][j+1] == "." and s_list[i][j-1] == "." and s_list[i+1][j] == ".":
                            answer = "No"
                            break
                elif i == H - 1:
                    if s_list[i][j+1] == "." and s_list[i-1][j] == ".":
                            answer = "No"
                            break
                    elif j == W-1:
                        if s_list[i][j-1] == "." and s_list[i-1][j] == ".":
                            answer = "No"
                            break
                    else:
                        if s_list[i][j+1] == "." and s_list[i][j-1] == "." and s_list[i-1][j] == ".":
                            answer = "No"
                            break
                else:
                    if j == 0:
                        if s_list[i][j+1] == "." and s_list[i+1][j] == "." and s_list[i-1][j] == ".":
                            answer = "No"
                            break
                    elif j == W-1:
                        if s_list[i][j-1] == "." and s_list[i+1][j] == "." and s_list[i-1][j] == ".":
                            answer = "No"
                            break
                    else:
                        if s_list[i][j+1] == "." and s_list[i][j-1] == "." and s_list[i+1][j] == "." and s_list[i-1][j] == ".":
                            answer = "No"
                            break

    print(answer)
