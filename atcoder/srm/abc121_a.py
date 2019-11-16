if __name__ == '__main__':
    input_list = list(map(int, input().split()))
    H = input_list[0]
    W = input_list[1]
    input_list = list(map(int, input().split()))
    h = input_list[0]
    w = input_list[1]

    answer = H * W - H * w - h * W + h * w

    print(answer)
