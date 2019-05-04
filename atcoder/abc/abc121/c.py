if __name__ == '__main__':
    input_list = list(map(int, input().split()))
    N = input_list[0]
    M = input_list[1]

    AB = [list(map(int, input().split())) for i in range(N)]

    sorted_AB = sorted(AB, key=lambda x:x[0])

    answer = 0
    cnt = 0
    for e in sorted_AB:
        pre_cnt = cnt

        Ai = e[0]
        Bi = e[1]

        cnt = min(M, cnt+Bi)
        answer += Ai * (cnt - pre_cnt)

        if cnt == M:
            break

    print(answer)
