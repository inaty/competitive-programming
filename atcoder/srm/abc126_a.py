if __name__ == '__main__':
    N, K = map(int, input().split())
    S = str(input())

    S_list = list(S)

    S_list[K-1] = S_list[K-1].lower()

    answer = "".join(S_list)

    print(answer)

