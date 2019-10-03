if __name__ == '__main__':
    input_list = list(map(int, input().split()))
    N = input_list[0]
    M = input_list[1]
    C = input_list[2]

    B = [0]*(M+1)

    B = list(map(int, input().split()))
    A=[list(map(int,input().split())) for i in range(N)]

    answer = 0

    for i in range(N):
        judge_value = 0
        for j in range(M):
            judge_value += A[i][j] * B[j]
        judge_value += C

        print(judge_value)
        if judge_value > 0:
            answer += 1

    print(answer)
