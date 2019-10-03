if __name__ == '__main__':
    s = str(input())
    t = str(input())

    s = sorted(s)
    t = sorted(t, reverse=True)

    if s < t:
        print("Yes")
    else:
        print("No")
