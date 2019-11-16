import sys

if __name__ == '__main__':
    N, T = map(int, input().split())
    ct = [list(map(int, input().split())) for i in range(N)]

    answer = sys.maxsize
    for i in range(N):
        ct_i = ct[i]
        c_i = ct_i[0]
        t_i = ct_i[1]
        if t_i <= T:
            if c_i < answer:
                answer = c_i

    if answer == sys.maxsize:
        answer = 'TLE'
    else:
        answer = str(answer)

    print(answer)

