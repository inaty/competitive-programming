if __name__ == '__main__':
    S = list(input())

    answer = 0
    for i in range(2**(len(S)-1)):

        operators = (list(format(i, '0' + str(len(S)-1) + 'b').replace('1', '+').replace('0', ' ')))

        state = S[0]
        for j in range(len(S)-1):
            state += operators[j] + S[j+1]
        state = state.replace(' ', '')

        answer += eval(state)

    print(answer)
