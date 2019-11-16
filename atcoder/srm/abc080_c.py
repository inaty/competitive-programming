if __name__ == '__main__':
    x = list(input())

    for i in range(2**3):
        state =[]
        state.append(x[0])
        for j in range(3):
            if ((i >> j) & 1) == 1:
                state.append('+')
            else:
                state.append('-')
            state.append(x[j+1])
        str_state = ''.join(state)
        if eval(str_state) == 7:
            print(str_state + '=7')
            break



