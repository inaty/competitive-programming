if __name__ == '__main__':
    N = int(input())

    pattern_num = 0
    for cake_num in range(N//4 + 1):
        for dotat_num in range(N//7 + 1):
            total_price = 4 * cake_num + 7 * dotat_num
            if total_price == N:
                pattern_num += 1

    if pattern_num >= 1:
        print("Yes")
    else:
        print("No")

