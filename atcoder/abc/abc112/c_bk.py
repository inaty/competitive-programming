
if __name__ == '__main__':
    N = int(input())
    xyh_list = [list(map(int, input().split())) for i in range(N)]

    for c_y in range(1, 101):
        for c_x in range(1, 101):
            # 頂上だどれくらいの高さであって欲しいか
            # −１はまだ良くわからないとき。０以上は確定しているとき。
            # −２はだめだとわかったとき
            needH = -1
            for xyh_i in xyh_list:
                y_i = xyh_i[1]
                x_i = xyh_i[0]
                h_i = xyh_i[2]
                if h_i > 0:
                    # この頂上から見て、頂上がc_y,c_xのときにどのくらいの高さがあって欲しいか求める。
                    tmp = h_i + abs(c_y - y_i) + abs(c_x - x_i)
                    if  needH == -1:
                        needH = tmp
                    elif needH != tmp:
                        needH = -1
                        break
            # だめだったら別の場所を探す
            if needH == -1:
                continue

            for xyh_i in xyh_list:
                y_i = xyh_i[1]
                x_i = xyh_i[0]
                h_i = xyh_i[2]
                if h_i == 0:
                    # 高さ0の場合に矛盾していないか調べる
                    tmp = h_i + abs(c_y - y_i) + abs(c_x - x_i)
                    if  needH == -1:
                        needH = tmp
                    elif needH != tmp:
                        needH = -1



