if __name__ == '__main__':
    n, k, q = map(int,input().split())
    a_list = [int(input()) for i in range(q)]

    point = [k-q for i in range(n)]
    for a in a_list:
        point[a-1]+=1

    for p in point:
        if p > 0:
            print("Yes")
        else:
            print("No")

