import math


if __name__ == '__main__':
    a, b = map(str,input().split())

    ab = int(a+b)

    if int(math.sqrt(ab)) * int(math.sqrt(ab)) == ab:
        print("Yes")
    else:
        print("No")
