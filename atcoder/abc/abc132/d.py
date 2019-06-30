def combination(n,r):
    import math
    return int(math.factorial(n)//(math.factorial(r)*math.factorial(n-r)))

if __name__ == '__main__':
    N, K = map(int, input().split())

    for i in range(1,K+1):
        answer = combination(N-K+1, i) * combination(K-1,i-1) %(10**9+7)
        print(answer)
