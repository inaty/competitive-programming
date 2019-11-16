if __name__ == '__main__':
    S = str(input())

    AA = int(S[0:2])
    BB = int(S[2:4])

    if (1 <= AA <= 12) and (1 <= BB <= 12):
        answer = "AMBIGUOUS"
    elif (AA == 0 or AA >= 13) and (1 <= BB <= 12):
        answer = "YYMM"
    elif (1 <= AA <= 12) and (BB == 0 or BB >= 13):
        answer = "MMYY"
    else:
        answer = "NA"

    print(answer)
