import fractions


def lcm(x, y):
    return (x * y) // fractions.gcd(x, y)


if __name__ == '__main__':
    A, B, C, D = map(int, input().split())

    # A以上B以下の数
    between_A_B = B - A + 1

    # B以下でCで割り切れる数
    max_num_diveided_by_C = (B//C)

    # A未満でCで割り切れる数
    min_num_diveided_by_C = ((A-1)//C)

    # B以下でDで割り切れる数
    max_num_diveided_by_D = (B//D)

    # A未満でDで割り切れる数
    min_num_diveided_by_D = ((A-1)//D)

    # B以下でCでもDでも割り切れる数
    max_num_diveided_by_CD = (B//lcm(C, D))

    # A未満でCでもDでも割り切れる数
    min_num_diveided_by_CD = ((A-1)//lcm(C, D))

    answer = between_A_B - ((max_num_diveided_by_C - min_num_diveided_by_C) + (max_num_diveided_by_D - min_num_diveided_by_D) - (max_num_diveided_by_CD - min_num_diveided_by_CD))
    print(answer)
