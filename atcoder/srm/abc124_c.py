"""
C - Coloring Colorfully
https://atcoder.jp/contests/abc124/tasks/abc124_c
"""
if __name__ == '__main__':
    S = str(input())

    len_S = len(S)
    S_list = []
    answer_type_1 = []
    answer_type_2 = []
    for i in range(0, len_S):
        S_list.append(S[i])
        if i % 2 == 0:
            answer_type_1.append("0")
            answer_type_2.append("1")
        else:
            answer_type_1.append("1")
            answer_type_2.append("0")

    answer_1 = 0
    answer_2 = 0

    for i, Si in enumerate(S_list):
        if S_list[i] != answer_type_1[i]:
            answer_1 += 1
        if S_list[i] != answer_type_2[i]:
            answer_2 += 1

    answer = min(answer_1, answer_2)

    print(answer)