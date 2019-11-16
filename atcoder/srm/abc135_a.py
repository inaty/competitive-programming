if __name__ == '__main__':
    A, B = map(int, input().split())

    K2 = (A+B)

    answer = 'IMPOSSIBLE'
    if 2*A-K2 == -1 * (2*B-K2) and (A+B)%2==0:
        answer = K2//2

    print(answer)

