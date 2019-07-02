import sys
import itertools


if __name__ == '__main__':
    N, M = map(int, input().split())
    xy_list = [list(map(int, input().split())) for _ in range(M)]

    answer = -sys.maxsize
    for i in range(2**N):
        members = []
        for j in range(N):
            if (i>>j) & 1:
                members.append((j+1))

        is_all_friend = True
        for l in map(list, itertools.combinations(members, 2)):
            if sorted(l) in xy_list:
                continue
            else:
                is_all_friend = False
                break
        if is_all_friend:
            answer = max(answer,len(members))

    print(answer)



