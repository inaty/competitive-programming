if __name__ == '__main__':
    S = str(input())
    T = str(input())

    answer = "Yes"
    for i in range(len(S)):
        l_s = S[i]
        l_t = T[i]
        for j in range(i, len(S)):
            r_s = S[j]
            r_t = T[j]

            if (l_s == r_s and l_t != r_t) or (l_s != r_s and l_t == r_t):
                answer = "No"
                break
    print(answer)
