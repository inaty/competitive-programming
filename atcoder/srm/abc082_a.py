def round_up(divided_number, devide_by_number):
    return (divided_number + devide_by_number - 1)//devide_by_number


if __name__ == '__main__':
    a, b = map(int, input().split())

    x = a + b

    print(round_up(x, 2))

