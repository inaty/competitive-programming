import math


if __name__ == '__main__':
    N = int(input())

    answer = -1
    for i in reversed(range(N+1)):
        if int(math.sqrt(i)) * int(math.sqrt(i)) == i:
            answer = i
            break
    print(answer)
