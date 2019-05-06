if __name__ == '__main__':
    N, M = map(int, input().split())

    KA = list(map(int, input().split()))

    items = set(KA[1:])

    for i in range(1, N):
        KA = list(map(int, input().split()))
        items = items & set(KA[1:])

    answer = len(items)
    print(answer)
