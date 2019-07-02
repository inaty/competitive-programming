import sys


if __name__ == '__main__':
    D, G = map(int, input().split())
    pc =[list(map(int, input().split())) for _ in range(D)]

    answer = sys.maxsize
    for bit in range(2 ** D):
        tmp_answer = 0
        score = 0
        state = []
        for i in range(D):
            if ((bit >> i) & 1):
                score += pc[i][1] + pc[i][1] * 100 * (i + 1)
                tmp_answer += pc[i][0]
        if score >= G:
            answer = min(answer,tmp_answer)
        else:
            for i in reversed(range(D)):
                if ((bit >> i) & 1):
                    continue
                else:
                    for j in range(pc[i][0]):
                        if score >= G:
                            break
                        score += 100 * (i + 1)
                        tmp_answer += 1
            answer = min(answer,tmp_answer)
    print(answer)

