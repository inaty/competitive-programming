if __name__ == '__main__':
    N, A, B, C, D = map(int, input().split())
    S = str(input())

    # print(S[A:D:])
    # print(S[A:D:].count("##"))
    # print(S[A:D:].count("#.#"))
    # print(S[A:D:].count("#..#"))

    answer = "-1"

    if C < D:
       if S[A:D:].count("##") >= 1:
           answer = "No"
       else:
           answer = "Yes"
    else:
       if S[A:D:].count("...") >= 1:
           answer = "Yes"
       else:
           answer = "No"

    print(answer)
