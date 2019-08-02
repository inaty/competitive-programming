import re


if __name__ == '__main__':
    S = str(input())
    T = str(input())


    answers = []

    # bit全探索
    for i in range(2**len(T)):
        tmp_T = T
        # print(i)
        for j in range(len(T)):
            if (i >> j) & 1:
                tmp_T = tmp_T[0:j:] + "?" + tmp_T[j+1::]
        if tmp_T != "?"*len(T):
            # print(tmp_T)
            for m in re.finditer(tmp_T.replace("?","_"), S.replace("?","_")):
                # print(m.span())
                answers.append((S[0:m.span()[0]:] + T + S[m.span()[1]::]).replace("?","a"))
        # print("-----------------")
    if len(answers) == 0:
        answer = "UNRESTORABLE"
    else:
        answer = sorted(answers)[0]

    print(answer)

