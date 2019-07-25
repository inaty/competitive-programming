if __name__ == '__main__':
    N = int(input())
    p_list = [int(input()) for _ in range(N)]

    p_list = sorted(p_list, reverse=True)

    answer = p_list[0]//2
    for i in range(1, N):
        answer += p_list[i]
    print(answer)
