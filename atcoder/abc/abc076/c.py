def main():
    S = str(input())
    T = str(input())

    if len(S) < len(T):
        print("UNRESTORABLE")
        return 0

    answers = []

    for i in range(0, len(S)-len(T)+1):
        is_ok = True
        for j in range(len(T)):
            # print(S[i+j])
            # print(T[j])
            # print("-----------------")
            if S[i+j] != "?" and S[i+j] != T[j]:
                is_ok = False
        if is_ok:
            answers.append((S[0:i:] + T + S[i+len(T)::]).replace("?","a"))

    if len(answers) == 0:
        print("UNRESTORABLE")
        return 0
    else:
        answer = sorted(answers)[0]
        print(answer)
        return 0


if __name__ == '__main__':
    main()
