if __name__ == '__main__':
    N, A, B, C, D = map(int, input().split())
    S = str(input())

    answer = "-1"

    if C < D:
       if S[A:D:].count("##") >= 1:
           answer = "No"
       else:
           answer = "Yes"
    else:

        answer = "No"
        for x in range(B, D+1):
            if (S[x-2] == "." and S[x-1] == "." and S[x] == "."):
               answer = "Yes"

    print(answer)
