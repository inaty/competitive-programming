def operate(S, l, r):
    S1 = S[0:l-1:]
    S2 = S[l-1:r:][::-1]
    S3 = S[r::]
    return S1 + S2 + S3


if __name__ == '__main__':
    S = input()
    N = int(input())
    lr_list = [list(map(int, input().split())) for _ in range(N)]

    for lr in lr_list:
        S = operate(S, lr[0], lr[1])
    print(S)

