if __name__ == '__main__':
    H, W = map(int, input().split())
    s = [list(input()) for _ in range(H)]

    answer = -2
    if s[0][0] == "#" or s[H-1][W-1] == "#":
        answer = -1
    else:
        

    print(answer)
