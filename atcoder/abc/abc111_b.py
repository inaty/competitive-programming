if __name__ == '__main__':
    N = int(input())

    answer = -1
    for i in range(N, 1000):
        i_str = str(i)
        if i_str[0] == i_str[1] and i_str[1] == i_str[2]:
            answer = i_str
            break
    print(i_str)
