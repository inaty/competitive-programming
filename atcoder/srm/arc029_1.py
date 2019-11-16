import sys


if __name__ == '__main__':
    N = int(input())
    t_list = [int(input()) for _ in range(N)]

    answer = sys.maxsize
    for i in range(2**N):
        time1 = 0
        time2 = 0
        for j in range(N):
            if ((i >>j) & 1):
                time1 += t_list[j]
            else:
                time2 += t_list[j]
        time = max(time1, time2)
        answer = min(answer, time)
    print(answer)
