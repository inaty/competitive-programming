import collections


if __name__ == '__main__':
    n = int(input())
    a_list = list(map(int,input().split()))

    c = collections.Counter(a_list)

    dic_cnt = dict(c.most_common())

    answer = -1
    for k in dic_cnt.keys():
        cnt = dic_cnt[k]
        if k-1 in dic_cnt.keys():
            cnt += dic_cnt[k-1]
        if k+1 in dic_cnt.keys():
            cnt += dic_cnt[k+1]
        answer = max(answer,cnt)
    print(answer)

