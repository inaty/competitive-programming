if __name__ == '__main__':
    n, k = map(int,input().split())
    h_list = list(map(int,input().split()))

    answer = 0
    for i in range(n):
        if h_list[i] >= k:
            answer+=1

    print(answer)
