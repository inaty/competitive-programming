if __name__ == '__main__':
    n = int(input())
    a_list = list(map(int,input().split()))

    d = {}
    for i in range(n):
        d[str(a_list[i])] = i+1

    answer = ""
    for i in range(n):
        if i != 0:
            answer += " "
        answer += str(d[str(i+1)])

    print(answer)

