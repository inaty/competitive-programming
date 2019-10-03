import heapq


if __name__ == '__main__':
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    q = []
    for x in a:
        heapq.heappush(q, -x)

    for i in range(m):
        x = heapq.heappop(q)
        x /= 2
        heapq.heappush(q,x)

    answer = 0
    for x in q:
        answer += int(-x//1)
    print(answer)

