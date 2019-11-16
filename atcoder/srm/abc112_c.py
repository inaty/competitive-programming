
if __name__ == '__main__':
    N = int(input())
    xyh_list = [list(map(int, input().split())) for i in range(N)]

    for c_y in range(0, 101):
        for c_x in range(0, 101):
            lastH = None
            for xyh_i in xyh_list:
                y_i = xyh_i[1]
                x_i = xyh_i[0]
                h_i = xyh_i[2]
                H = h_i + abs(c_y - y_i) + abs(c_x - x_i)
                # if H < 1:
                #     continue
                if lastH:
                    if H != lastH:
                        break
                lastH = H
            else:
                print(c_x, c_y, H)




