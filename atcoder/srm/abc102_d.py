if __name__ == '__main__':
    N= int(input())
    A_list = list(map(int, input().split()))

    B_list = []

    for i in range(len(A_list)):
        B_list.append(A_list[i]-(i+1))

    print(B_list)


