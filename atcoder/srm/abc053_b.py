if __name__ == '__main__':
    s = str(input())

    A_indexes = []
    Z_indexes = []

    for i in range(len(s)):
        if s[i] == "A":
            A_indexes.append(i)
        if s[i] == "Z":
            Z_indexes.append(i)

    print(max(Z_indexes)-min(A_indexes)+1)