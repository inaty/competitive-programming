import itertools


'''
A - Five Antennas
https://atcoder.jp/contests/abc123/tasks/abc123_a
'''
if __name__ == '__main__':
    a = int(input())
    b = int(input())
    c = int(input())
    d = int(input())
    e = int(input())
    k = int(input())

    position = [a, b, c, d, e]
    test_cases = list(itertools.combinations(position, 2))

    is_all_communication_possible = True

    for e in test_cases:
        position1 = e[0]
        position2 = e[1]

        if position2 - position1 > k:
            is_all_communication_possible = False

    if is_all_communication_possible:
        print("Yay!")
    else:
        print(":(")
