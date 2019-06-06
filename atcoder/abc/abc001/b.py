if __name__ == '__main__':
    m = int(input())

    if m < 100:
        print("00")
    elif 100 <= m < 1000:
        print("0" + str(m*10//1000))
    elif 1000 <= m < 5000:
        print(str(m*10//1000))
    elif 6000 <= m <= 30000:
        print(m//1000+50)
    elif 35000 <= m <= 70000:
        print((m//1000-30)//5+80)
    elif 70000 < m:
        print("89")

