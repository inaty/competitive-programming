import bisect


if __name__ == '__main__':
    N = int(input())
    A = sorted(list(map(int, input().split())))
    B = sorted(list(map(int, input().split())))
    C = sorted(list(map(int, input().split())))

    answer = 0
    for b in B:
        answer += (bisect.bisect_left(A, b)) * (N - bisect.bisect_right(C, b))
    print(answer)
