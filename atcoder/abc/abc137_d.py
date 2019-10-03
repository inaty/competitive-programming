from heapq import heappush, heappop


#  https://atcoder.jp/contests/abc137/submissions/6840855 を参考にした。
q = []
if __name__ == '__main__':
    n, m = map(int, input().split())
    ab = [list(map(int, input().split())) for i in range(n)]
    ab = sorted(ab, reverse=True)

    q = []
    answer = 0
    for i in range(m-1, -1, -1):
        while ab and i + ab[-1][0] <= m:
            (a, b) = ab.pop()
            heappush(q, -b)

        if q:
            answer -= heappop(q)

    print(answer)




