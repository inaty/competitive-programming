if __name__ == '__main__':
    S = str(input())

    plus_cnt = S.count('+')
    minus_cnt = S.count('-')

    print(plus_cnt-minus_cnt)
