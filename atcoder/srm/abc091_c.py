def calc_num_of_cadidate(cadidate):
    num_of_cadidate = []
    for i in range(N):
        tmp = 0
        for e in blue_cadidate:
            if i+1 in e:
                tmp += 1
        num_of_cadidate.append(tmp)
    return num_of_cadidate


def remove_cadidate(cadidate, remove_num):
    for i in range(len(cadidate)):
        cadidate[i].remove(remove_num)
    return cadidate


if __name__ == '__main__':
    N = int(input())
    ab_list = [list(map(int, input().split())) for i in range(N)]
    cd_list = [list(map(int, input().split())) for i in range(N)]

    blue_cadidate = []

    for i in range(len(ab_list)):
        ab = ab_list[i]
        a = ab[0]
        b = ab[1]
        tmp =[]
        for j in range(len(cd_list)):
            cd = cd_list[j]
            c = cd[0]
            d = cd[1]
            if a < c and b < d:
                tmp.append(j)
        blue_cadidate.append(tmp)

    answer = 0
    while max(calc_num_of_cadidate(blue_cadidate)) != 0:
        answer += 1
        num_of_cadidate = calc_num_of_cadidate(blue_cadidate)
        remove_num = num_of_cadidate.index(min(1, min(num_of_cadidate))) + 1
        blue_cadidate = remove_cadidate(blue_cadidate, remove_num)

    print(answer)
