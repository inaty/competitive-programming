import sys


if __name__ == '__main__':
    N = int(input())
    S = str(input())

    answer = sys.maxsize
    # for i in range(0, N):
    #    left = S[:i:]
    #    center = S[i]
    #    right = S[i+1::]
    #    cnt = left.count("W") + right.count("E")
    #
    #    answer = min(answer, cnt)

    sum_accum = [0] * (N+1)
    sum_accum_left = [0] * (N+1)
    sum_accum_right = [0] * (N+1)
    for i in range(0, N):
        left = S[:i:]
        right = S[i+1::]
        if left[-1::] == "W":
            sum_accum_left[i+1] = sum_accum_left[i] + 1
        else:
            sum_accum_left[i+1] = sum_accum_left[i]
        if right[:1:] == "E":
            sum_accum_right[i+1] = sum_accum_left[i] + 1
        else:
            sum_accum_right[i+1] = sum_accum_left[i]




    print(answer)
