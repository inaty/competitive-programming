if __name__ == '__main__':
    s = list(input())

    odd = set(s[0::2])
    even = set(s[1::2])

    if ("L" not in odd) and ("R" not in even):
        print("Yes")
    else:
        print("No")


