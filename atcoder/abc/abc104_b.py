if __name__ == '__main__':
    S = str(input())

    tmp_S = S[2:len(S)-1]
    tmp_S_2 = S[1] + tmp_S.replace('C', '') + S[len(S)-1]

    if S[0] == 'A' and tmp_S.count('C') == 1 and tmp_S_2.islower() == True:
        print('AC')
    else:
        print('WA')
