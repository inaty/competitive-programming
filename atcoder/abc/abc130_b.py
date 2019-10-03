if __name__ == '__main__':
    N, X = map(int, input().split())
    L_list = list(map(int, input().split()))


    answer = 0
    for i in range(1, N+2):
       if i == 1:
           D = 0
       else:
           D = D + L_list[i-2]

       if D <= X:
            answer += 1

    print(answer)