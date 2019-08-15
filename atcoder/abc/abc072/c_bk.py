import collections


if __name__ == '__main__':
    n = int(input())
    A = list(map(int,input().split()))

    tmp_A = []
    for a in A:
        tmp_A.append(a-1)
        tmp_A.append(a)
        tmp_A.append(a+1)

    c = collections.Counter(tmp_A)
    most_common_element = c.most_common()[0][0]

    answer = 0
    for a in A:
        if a == most_common_element or a-1 == most_common_element or a+1 == most_common_element:
            answer += 1
    print(answer)

