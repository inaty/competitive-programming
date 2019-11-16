if __name__ == '__main__':
    N, K = map(int, input().split())
    a_list = list(map(int, input().split()))

    # しゃくとり法
    answer = 0
    right = 0
    sum = 0
    for left in range(N):
        # print(str(left) + ", " + str(right))
        # print("------------------")
        while sum < K:
            if right == N:
                break
            else:
                sum += a_list[right]
                right += 1

        if sum < K:
            break
        answer += N - right+1
        sum -= a_list[left]
    print(answer)

