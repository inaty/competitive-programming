if __name__ == '__main__':
    input_list = list(map(int, input().split()))

    A = int(input_list[0])
    B = int(input_list[1])
    C = int(input_list[2])

    if A <= C <= B :
        print("Yes")
    elif B <= C <= A :
        print("Yes")
    else :
        print("No")
