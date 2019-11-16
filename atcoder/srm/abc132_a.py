from collections import Counter


if __name__ == '__main__':
    S = list(input())

    s = Counter(S)

    if len(s) == 2 and max(s.values()) == 2 and min(s.values()) == 2:
        print("Yes")
    else:
        print("No")
