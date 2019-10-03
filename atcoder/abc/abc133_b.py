import math


def is_distance_int(D, y, z):
    sum_diff_squre = 0
    for i in range(D):
        sum_diff_squre += (y[i] - z[i]) * (y[i] - z[i])
    distance = int(math.sqrt(sum_diff_squre))

    if distance * distance == sum_diff_squre:
        return True
    else:
        return False


if __name__ == '__main__':
    N, D = map(int, input().split())
    X = [list(map(int, input().split())) for _ in range(N)]

    answer = 0
    for i in range(N):
        for j in range(0, i):
            # print(str(i+1) + ',' + str(j+1))
            if is_distance_int(D, X[i], X[j]):
                answer += 1

    print(answer)
