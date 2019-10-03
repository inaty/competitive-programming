if __name__ == '__main__':
    s = list(input())
    t = list(input())

    answer = "No"
    for i in range(len(s)):
        if (s[i::] + s[0:i:]) == t:
            answer = "Yes"
    print(answer)
