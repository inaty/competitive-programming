if __name__ == '__main__':
    S = list(input())

    answer = 0
    for i in range(1,10**len(S)):
        is_ok = True
        for j in range(len(S)):
            if S[j] != "?" and S[j] != str(i).zfill(len(S))[j]:
                is_ok = False
        if is_ok and (max(0, i-5))%13 == 0:
            print(i)
            print("-----------------")
            answer += 1
    print(answer)
