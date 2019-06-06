if __name__ == '__main__':
    s = str(input())

    print(s[0:1:]+str(len(s)-2)+s[-1::])

