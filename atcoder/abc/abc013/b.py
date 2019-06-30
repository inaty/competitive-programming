if __name__ == '__main__':
    a = int(input())
    b = int(input())

    answer = -1
    if a == b:
        answer = 0
    elif a < b:
        answer1 = b - a
        answer2 = (a-0) + (9-b+1)
        answer = min(answer1, answer2)
    else:
        answer1 = a - b
        answer2 = (b-0) + (9-a+1)
        answer = min(answer1, answer2)
    print(answer)

