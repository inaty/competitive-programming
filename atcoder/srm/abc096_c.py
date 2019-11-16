if __name__ == '__main__':
    H, W = map(int, input().split())
    s_list = [list(input()) for i in range(H)]


    answer = "Yes"

    for x in range(H):
        for y in range(W):
            if s_list[x][y] == '.':
                continue
            is_all_white = True
            dxs = [0, 1, 0, -1]
            dys = [1, 0, -1, 0]
            for dx, dy in zip(dxs, dys):
                nx = x + dx
                ny = y + dy
                if 0 <= nx <= H-1 and 0 <= ny <= W-1:
                    if s_list[nx][ny] == "#":
                        is_all_white = False
                        break
            if is_all_white:
                answer = "No"
                break
        if s_list[x][y] == '#' and is_all_white:
            break

    print(answer)
