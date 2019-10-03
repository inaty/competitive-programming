if __name__ == '__main__':
    N = int(input())
    txy_list = [[0,0,0]] + [list(map(int, input().split())) for i in range(N)]

    answer = "Yes"
    for i in range(1, len(txy_list)):
        before_t = txy_list[i-1][0]
        t = txy_list[i][0]
        before_x = txy_list[i-1][1]
        x = txy_list[i][1]
        before_y = txy_list[i-1][2]
        y = txy_list[i][2]

        if t - before_t < (x - before_x) + (y - before_y):
            answer = 'No'
            break
        elif ((t - before_t) - ((x - before_x) + (y - before_y)))%2 != 0:
            answer = 'No'
            break

    print(answer)
