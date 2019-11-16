if __name__ == '__main__':
    n = int(input())
    s = input()

    answer = 1
    for i in range(1,n):
        if s[i-1] != s[i]:
            answer += 1

    print(answer)

