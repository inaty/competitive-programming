if __name__ == '__main__':
    n = list(input())

    if n == n[::-1]:
        print("Yes")
    else:
        print("No")
