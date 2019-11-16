if __name__ == '__main__':
    n = int(input())
    a = list(map(float, input().split()))

    reverse_sum = 0
    for i in range(n):
        reverse_sum += 1/a[i]

    print(1/reverse_sum)




