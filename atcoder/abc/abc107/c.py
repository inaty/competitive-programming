if __name__ == '__main__':
    N = int(input())

    rev_answer = ""
    while N != 0:
        rem = N % (-2)
        if rem < 0:
            rem += 2
        N = (N - rem) // (-2)
        rev_answer += str(rem)

    answer = rev_answer[::-1]
    if answer == "":
        answer = 0

    print(answer)


