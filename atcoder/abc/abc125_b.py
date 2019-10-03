if __name__ == '__main__':
    input_list = list(map(int, input().split()))
    N = input_list
    input_list = list(map(int, input().split()))
    V_list = input_list
    input_list = list(map(int, input().split()))
    C_list = input_list

    d_list = [v - c for (v, c) in zip(V_list, C_list)]

    answer = 0

    for d in d_list:
        if d > 0 :
            answer += d

    print(answer)
