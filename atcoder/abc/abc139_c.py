if __name__ == '__main__':
    n = int(input())
    h = list(map(int,input().split()))

    max_move = 0
    no_move = 0
    for i in range(n-1):
       if h[i] >= h[i+1]:
           # 移動できる
           no_move +=1
           max_move = max(max_move, no_move)
       else:
           # 移動できない
            no_move = 0
    print(max_move)
