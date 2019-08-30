if __name__ == '__main__':
    a, b = map(int,input().split())

    answer = 0
    for i in range(a, b+1):
        if str(i)[0] == str(i)[-1] and str(i)[1] == str(i)[-2]:
            answer += 1
    print(answer)