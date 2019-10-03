if __name__ == '__main__':
    N = input()

    fn = 0
    for i in range(len(N)):
        fn += int(N[i])

    if int(N) % fn == 0:
        print('Yes')
    else:
        print('No')


