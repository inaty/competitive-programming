if __name__ == '__main__':
    N = int(input())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))

    answer = 0
    for i in reversed(range(0,N)):
        answer += min(A[i+1],B[i])
        B[i] = max(0, B[i]-A[i+1])
        answer += min(A[i],B[i])
        A[i] = max(0, A[i]-B[i])
    print(answer)

