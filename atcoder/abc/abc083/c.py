if __name__ == '__main__':
    X, Y = map(int,input().split())

    Ai = X

    answer = 1
    while Ai * 2 <= Y:
       if Ai * 2 <= Y:
           Ai = Ai * 2
           answer += 1
    print(answer)

