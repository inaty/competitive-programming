import copy


if __name__ == '__main__':
    N = int(input())
    X_list = list(map(int, input().split()))
    tmp_X_list = copy.deepcopy(X_list)
    tmp_X_list = sorted(tmp_X_list)
    med_minus1 = tmp_X_list[N//2-1]
    med_plus1 = tmp_X_list[N//2]

    answer = -1
    for i in range(0, N):
        if X_list[i] <= med_minus1:
            answer = med_plus1
        elif X_list[i] >= med_plus1:
            answer = med_minus1

        print(answer)

