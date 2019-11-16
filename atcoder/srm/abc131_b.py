import sys


if __name__ == '__main__':
    N, L = map(int, input().split())

    eat_apple = 0
    min_abs_apple_taste = sys.maxsize
    apples = []
    for i in range(N):
        taste = L+(i+1)-1
        apples.append(taste)
        if min_abs_apple_taste > abs(taste):
            min_abs_apple_taste = abs(taste)
            eat_apple = taste

    answer = 0
    for apple in apples:
        if apple != eat_apple:
            answer += apple
    print(answer)
