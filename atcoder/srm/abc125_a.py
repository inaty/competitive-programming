if __name__ == '__main__':
    input_list = list(map(int, input().split()))
    A = input_list[0]
    B = input_list[1]
    T = input_list[2]

    cnt = int(T+0.5)//int(A)
    answer = 0

    for i in range(1, cnt+1):
        answer += B

    print(answer)

