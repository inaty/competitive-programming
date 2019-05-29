import numpy as np
import collections

if __name__ == '__main__':
    n = int(input())
    v_list = np.array(list(map(int, input().split())))

    v_odd = v_list[1::2]
    v_even = v_list[0::2]

    v_odd_cnt = {}
    v_even_cnt = {}

    for e in set(v_odd):
        v_odd_cnt[str(e)] = np.count_nonzero(v_odd == e)

    for e in set(v_even):
        v_even_cnt[str(e)] = np.count_nonzero(v_even == e)

    answer = -1

    len_v_odd = len(set(v_odd))
    len_v_even = len(set(v_even))
    cnt_v_odd = collections.Counter(v_odd)
    cnt_v_even = collections.Counter(v_even)

    if  len_v_odd == 1 and len_v_even == 1:
        answer = 0
    elif len_v_odd == 1:
        answer = len_v_odd - cnt_v_even.most_common()[0][1]
    elif len_v_even == 1:
        answer = len_v_even - cnt_v_odd.most_common()[0][1]
    else:
        answer = min(len_v_even - cnt_v_even.most_common()[0][1], len_v_odd - cnt_v_odd.most_common()[0][1])

    print(answer)
