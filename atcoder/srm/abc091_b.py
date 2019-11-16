if __name__ == '__main__':
    N = int(input())
    s_list = [str(input()) for i in range(N)]
    M = int(input())
    t_list = [str(input()) for i in range(M)]

    D = {}

    for s in s_list:
        if s in D.keys():
            D[s] = D[s] + 1
        else:
            D[s] = 1

    for t in t_list:
        if t in D.keys():
            D[t] = D[t] - 1
        else:
            D[t] = -1

    answer = max(0, max(D.values()))
    print(answer)
