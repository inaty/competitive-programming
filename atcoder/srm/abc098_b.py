import sys


if __name__ == '__main__':
    N = int(input())
    S = str(input())

    S_list = list(S)

    answer = - sys.maxsize
    for i in range(1,len(S)):
        left_S = S_list[:i:]
        right_S = S_list[i::]
        cnt_both_S = len(set(left_S) & set(right_S))
        answer = max(answer, cnt_both_S)

    print(answer)
