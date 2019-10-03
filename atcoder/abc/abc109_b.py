if __name__ == '__main__':
    N = int(input())
    W = [str(input()) for _ in range(N)]

    mem = set([W[0]])

    answer = 'Yes'
    for i in range(1, N):
        if len(mem & set([W[i]])) == 0 and W[i-1][-1::] == W[i][0:1:]:
            mem.add(W[i])
        else:
            # print(W[i-1])
            # print(W[i-1][-1::])
            # print(W[i])
            # print(W[i][0:1:])
            # print(mem)
            # print(set([W[i]]))
            # print(len(mem & set(W[i])))
            answer = 'No'
            break
    print(answer)

