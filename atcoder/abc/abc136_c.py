if __name__ == '__main__':
    N = int(input())
    H = list(map(int, input().split()))

    answer = 'Yes'
    for i in reversed(range(0, N-1)):
        if H[i] - H[i+1] <= 0:
            continue
        elif H[i] - H[i+1] == 1:
            H[i] = H[i] - 1
        else:
            answer = 'No'
            break
    print(answer)


