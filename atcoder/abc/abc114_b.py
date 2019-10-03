import sys

if __name__ == '__main__':
    S = str(input())

    X = []

    for i in range(len(S)):
        if i == len(S)-1:
            X.append(int(S[i]))
        elif i == len(S)-2:
            X.append(int(S[i])*10+int(S[i-1]))
        else:
            X.append(int(S[i])*100+int(S[i+1])*10+int(S[i+2]))

    answer = sys.maxsize
    for x in X:
        if abs(x-753) < answer:
            answer = abs(x-753)

    print(answer)
