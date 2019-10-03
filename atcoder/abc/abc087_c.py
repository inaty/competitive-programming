import sys


if __name__ == '__main__':
    N = int(input())
    A = [list(map(int, input().split())) for _ in range(2)]

    answer = - sys.maxsize
    for i in range(N):
        xi = 0
        yi = 0
        sum_candies = A[0][0]
        for j in range(N):
            if i == j:
                yi += 1
            else:
                xi += 1
            sum_candies += A[yi][xi]
        answer = max(answer, sum_candies)
    print(answer)
