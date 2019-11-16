if __name__ == '__main__':
    S = str(input())
    N = len(S)

    count_0 = S.count('0')
    count_1 = S.count('1')

    answer = 2 * min(count_0, count_1)

    print(answer)
