import sys


if __name__ == '__main__':
    L, R = map(int, input().split())

    answer = sys.maxsize
    if R - L >= 2019 * 2:
        answer = 0
    else:
        for i in range(L, R):
            for j in range(i+1, R+1):
                # print(str(i) + ', ' + str(j))
                i_mod2019 = i % 2019
                j_mod2019 = j % 2019
                answer = min(answer, (i_mod2019 * j_mod2019) % 2019)
    print(answer)

