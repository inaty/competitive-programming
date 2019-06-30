if __name__ == '__main__':
    X = int(input())
    A_list = list(map(int, input().split()))

    num_of_soft = 0
    num_of_bugs = 0

    for A in A_list:
        if A != 0:
            num_of_soft += 1

        num_of_bugs += A

    answer = (num_of_soft + num_of_bugs -1)//num_of_soft
    print(answer)

