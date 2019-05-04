if __name__ == '__main__':
    N = int(input())
    S = str(input())

    sharp_place = S.find("#")

    if sharp_place == -1:
        ok_pattern1 = "."*N
    else:
        ok_pattern1 = "."*sharp_place + "#" * (N-sharp_place)

    answer1 = 0

    for j in range(0, len(ok_pattern1)):
        if ok_pattern1[j] != S[j]:
            answer1 += 1

    answer2 = S.count("#")
    answer3 = S.count(".")

    answer = min(answer1, answer2)
    answer = min(answer, answer3)

    print(answer)