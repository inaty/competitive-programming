if __name__ == '__main__':
    A = int(input())
    B = int(input())
    C = int(input())
    X = int(input())

    answer = 0

    for i_a in range(A+1):
        for i_b in range(B+1):
            for i_c in range(C+1):
                if i_a * 10 + i_b * 2 + i_c == X / 50:
                    answer += 1

    print(answer)

