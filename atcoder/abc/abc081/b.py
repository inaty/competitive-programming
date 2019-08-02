def is_all_even(A):
    res = True
    for a in A:
        if a%2 == 1:
            res = False
            return res
    return res


if __name__ == '__main__':
    N = int(input())
    A = list(map(int, input().split()))

    answer = 0
    while is_all_even(A):
        answer += 1
        A = [a//2 for a in A]

    print(answer)

