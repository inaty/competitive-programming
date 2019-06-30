if __name__ == '__main__':
    n = int(input())
    p_list = list(map(int, input().split()))

    answer = 0
    for i in range(1,len(p_list)-1):
        p1 = p_list[i-1]
        p2 = p_list[i]
        p3 = p_list[i+1]

        tmp_p_list = [p1, p2, p3]
        tmp_p_list = sorted(tmp_p_list)

        if tmp_p_list[1] == p2:
            answer += 1
    print(answer)
