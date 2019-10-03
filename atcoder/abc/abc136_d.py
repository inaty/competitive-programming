def create_rf_indexes(S):
    res = []
    for i in range(len(S)-1):
        if S[i] == "R" and S[i+1] == "L":
            res.append(i)
    return res


if __name__ == '__main__':
    S = input()

    r_list = create_rf_indexes(S)
    print(r_list)

    stay_rl_point = [-1]*len(S)
    move_rl_point = [-1]*len(S)
    for i in range(len(S)):
        now = i
        move = 0
        for j in range(len(S)):
            if now in r_list:
                stay_rl_point[i]=now
                move_rl_point[i]=move
                break
            if S[now] == "R":
                now += 1
            else:
                now -= 1
            move += 1
    print(stay_rl_point)
    print(move_rl_point)

    answer = [0] * len(S)
    for i in range(len(S)):
        final_index = stay_rl_point + (10**100-move_rl_point[i])%2
        answer[final_index] += 1


