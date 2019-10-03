if __name__ == '__main__':
    c =[list(map(int, input().split())) for _ in range(3)]

    answer = 'No'
    for a1 in range(101):
        for a2 in range(101):
            for a3 in range(101):
                b1 = (c[0][0] + c[1][0] + c[2][0]) - (a1 + a2 + a3)
                b2 = (c[0][1] + c[1][1] + c[2][1]) - (a1 + a2 + a3)
                b3 = (c[0][2] + c[1][2] + c[2][2]) - (a1 + a2 + a3)

                if b1 % 3 == 0 and b2 % 3 == 0 and b3 % 3 == 0:
                    answer = 'Yes'
                    break
    print(answer)


