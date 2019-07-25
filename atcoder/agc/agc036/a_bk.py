def factorization2(n):
    arr = []
    temp = n
    for i in range(2, int(-(-n**0.5//1))+1):
        # if temp <= 10**9:
        #     arr.append([temp, 1])
        #     break
        if temp%i==0:
            if temp <= 10**9:
                break
            cnt=0
            while temp%i==0:
                cnt+=1
                temp //= i
            arr.append([i, cnt])

    if temp!=1:
        arr.append([temp, 1])

    if arr==[]:
        arr.append([n, 1])

    return arr


if __name__ == '__main__':
    S = int(input())
    prime_numbers = factorization2(S)

    # print(prime_numbers)

    prime_numbers_list = []

    for e in prime_numbers:
        number, count = e
        for i in range(count):
            prime_numbers_list.append(number)


    # bit全探索
    pattern = len(prime_numbers_list)
    for i in range(2**pattern):
        width = 1
        height = 1
        index = 0
        for j in range(pattern):
            if ((i >> j) & 1) == 1:
                width *= prime_numbers_list[index]
            else:
                height *= prime_numbers_list[index]
            index += 1
        if (width <= 10**9) and (height <= 10**9):
            break

    x1 = 0
    y1 = 0
    x2 = width
    y2 = 0
    x3 = 1
    y3 = height

    print(str(x1) + ' ' + str(y1) + ' ' + str(x2) + ' ' + str(y2) + ' ' + str(x3) + ' ' + str(y3))