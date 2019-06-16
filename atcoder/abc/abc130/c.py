if __name__ == '__main__':
    W, H, x, y = map(int, input().split())

    if x * 2 == W and y * 2 == H:
        print(str(W*H/2) + " " + str(1))
    else:
        print(str(W*H/2) + " " + str(0))
