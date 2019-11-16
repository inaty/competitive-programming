if __name__ == '__main__':
    a,b = map(int, input().split())

    plug_no = 1

    answer = 0
    while(True):
        if plug_no >= b:
            break
        answer += 1
        plug_no += (a-1)

    print(answer)




