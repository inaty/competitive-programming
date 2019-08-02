if __name__ == '__main__':
    s = list(map(int,list(input())))

    answer = 0
    for i in range(len(s)):
        if s[i] == 1:
            answer += 1
    print(answer)


