

# if __name__ == '__main__':
#
#     N = int(input())
#     uvw_list = [list(map(int, input().split())) for i in range(N-1)]
#
#     for i in range(N-1):
#         uvw_list[i][2] = uvw_list[i][2] % 2
#
#     print(N)
#     print(uvw_list)
#
#     answer = ["-1"] * N
#
#     answer[0] = 1
#
#     for uvw in uvw_list:

import sys

n = int(input())
links = [set() for _ in [0] * n]
for line in sys.stdin:
    u, v, w = map(int, line.split())
    u -= 1
    v -= 1
    links[u].add((v, w))
    links[v].add((u, w))

print(links)

