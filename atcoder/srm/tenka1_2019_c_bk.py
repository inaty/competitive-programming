if __name__ == '__main__':
    N = int(input())
    S = str(input())

    answer = N + 1

    for i in range(0, N+1):
        ok_pattern = "."*i + "#" * (N-i)
        different_str_count = 0

        for j in range(0, len(ok_pattern)):
            if ok_pattern[j] != S[j]:
                different_str_count += 1

        if answer > different_str_count:
            answer = different_str_count

        if answer == 0:
            break

    print(answer)