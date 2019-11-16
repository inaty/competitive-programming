import sys

if __name__ == '__main__':
    N = int(input())
    T, A = map(int, input().split())
    H_list = list(map(int, input().split()))


    min_diff = sys.maxsize
    avg_T_list = list(map(lambda x: T - x * 0.006, H_list))

    answer = 0
    for i in range(len(avg_T_list)):
        if min_diff > abs(avg_T_list[i]-A):
            min_diff = abs(avg_T_list[i]-A)
            answer = i + 1
    print(answer)
