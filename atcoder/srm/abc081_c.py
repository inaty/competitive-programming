from collections import Counter

if __name__ == '__main__':
    N, K = map(int, input().split())
    A = list(map(int, input().split()))

    c = Counter(A)
    sorted_c = sorted(c.values())

    answer = 0
    for i in range(len(c.keys())-K):
        answer += sorted_c[i]
    print(answer)


