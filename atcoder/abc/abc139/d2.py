def f(n):
    answer1 = int(n*(n-1)/2)
    answer = answer1
    for i in range(n):
        answer = max(answer,answer1-(i+1) + n%(i+2))
    if answer1 != answer:
        print(n)
        print(answer)
        print(answer1)
        print("=================")


if __name__ == '__main__':
    for i in range(1,100000):
        # if i % 100 == 0:
        #     print("i;" + str(i) + "100000")
        f(i)
