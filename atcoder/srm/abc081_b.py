if __name__ == '__main__':
    N = int(input())
    A = list(map(int, input().split()))

    answer = 0
    for i in range(max(A)):
        is_all_even = True
        for a in A:
            if a % 2 != 0:
                is_all_even = False
                break
        if is_all_even == True:
            answer += 1
            A = list(map(lambda x:int(x / 2), A))
        else:
            break
    print(answer)
