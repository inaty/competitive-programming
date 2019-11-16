from collections import Counter

if __name__ == '__main__':
    # n = int(input())
    # v_list = np.array(list(map(int, input().split())))
    v_list = [3, 2, 3, 2, 3, 1]
    N = len(v_list)

    v_odd = v_list[1::2]
    v_even = v_list[0::2]

    answer = -1

    v_odd_n = Counter(v_odd).most_common(2)
    v_even_n = Counter(v_even).most_common(2)

    if v_odd_n[0][0] == v_even_n[0][0]:
        if len(v_odd_n) == 1:



    else:
        answer = N - v_odd_n[0][1] - v_even_n[0][1]

    # len_v_odd = len(v_odd)
    # len_v_even = len(v_even)
    # cnt_v_odd = collections.Counter(v_odd)
    # cnt_v_even = collections.Counter(v_even)
    #
    # # print(cnt_v_odd.most_common()[0][0])
    # # print(cnt_v_odd.most_common()[0][1]])
    # # print(cnt_v_odd.most_common()[1][1])
    #
    # if cnt_v_odd.most_common()[0][0] == cnt_v_even.most_common()[0][0]:
    #     answer = min(
    #                 min(len_v_odd - cnt_v_odd.most_common()[0][1], len_v_even - cnt_v_even.most_common()[1][1]),
    #                 min(len_v_odd - cnt_v_odd.most_common()[1][1], len_v_even - cnt_v_even.most_common()[0][1]),
    #                 )
    # else:
    #     # print(len_v_odd)
    #     # print(cnt_v_odd.most_common()[0][1])
    #     # print(len_v_even)
    #     # print(cnt_v_even.most_common()[0][1])
    #     answer = (len_v_odd - cnt_v_odd.most_common()[0][1]) + (len_v_even - cnt_v_even.most_common()[0][1])

    print(answer)
