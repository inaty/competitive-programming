if __name__ == '__main__':
    P, Q, R = map(int, input().split())

    print(min(P+Q, P+R, Q+R))

