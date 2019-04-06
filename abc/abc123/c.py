""""
C - Five Transportations
https://atcoder.jp/contests/abc123/tasks/abc123_c
"""
if __name__ == '__main__':
    n = int(input())
    a = int(input())
    b = int(input())
    c = int(input())
    d = int(input())
    e = int(input())

    pop_list = [n, 0, 0, 0, 0, 0]
    i = 0

    while pop_list[5] < n:
        i += 1
        move0to1 = max(pop_list[0] - a, a) if pop_list[0] > a else pop_list[0]
        move1to2 = max(pop_list[1] - b, b) if pop_list[1] > b else pop_list[1]
        move2to3 = max(pop_list[2] - c, c) if pop_list[2] > c else pop_list[2]
        move3to4 = max(pop_list[3] - d, d) if pop_list[3] > d else pop_list[3]
        move4to5 = max(pop_list[4] - e, e) if pop_list[4] > e else pop_list[4]

        pop_list[0] = pop_list[0] - move0to1
        pop_list[1] = pop_list[1] + move0to1 - move1to2
        pop_list[2] = pop_list[2] + move1to2 - move2to3
        pop_list[3] = pop_list[3] + move2to3 - move3to4
        pop_list[4] = pop_list[4] + move3to4 - move4to5
        pop_list[5] = pop_list[5] + move4to5

    print(i)
