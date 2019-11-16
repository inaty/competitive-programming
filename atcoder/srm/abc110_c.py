def find_all(s, target):
    index = -1
    indexes = []
    while True:
        index = s.find(target, index + 1)
        if index == -1:
            break
        indexes.append(index)
    return indexes


if __name__ == '__main__':
    S = str(input())
    T = str(input())


    S_list = []
    T_list = []

    for e in "abcdefghijklmnopqrstuvwxyz":
        S_list.append(find_all(S, e))
        T_list.append(find_all(T, e))

    if set(S_list) == set(T_list):
        print("Yes")
    else:
        print("No")
