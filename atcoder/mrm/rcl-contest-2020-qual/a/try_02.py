from sys import argv
from collections import namedtuple

N_FIXED = 1000
W_FIXED = 8
K_FIXED = 6
V_FIXED = 8


class XorShift:
    mask = (1 << 64) - 1

    def __init__(self, seed=None):
        self.x = seed or 88172645463325252

    def next(self):
        self.x ^= self.x << 13
        self.x &= self.mask
        self.x ^= self.x >> 7
        self.x ^= self.x << 17
        self.x &= self.mask
        return self.x

    def next_int(self, n):
        upper = self.mask // n * n
        v = self.next()
        while upper <= v:
            v = self.next()
        return v % n


Block = namedtuple("Block", ["color", "value"])


class TestCase:

    def __init__(self, seed=None, N=0, W=None, K=None, V=None, cv=[]):
        self.N = N
        self.W = W 
        self.K = K 
        self.V = V 

        self.blocks = []
        for i in range(self.N):
            self.blocks.append(Block(*map(int, cv[i])))

    def __str__(self):
        ret = "%d %d %d %d\n" % (self.N, self.W, self.K, self.V)
        return ret + "\n".join("%d %d" % (block.color, block.value) for block in self.blocks)


def usage():
    print("python judge.py [testdata_file_path] [output_file_path]")


def judge(tc, output):
    if len(output) != tc.N:
        raise RuntimeError("[ERROR] 出力が%d行ではありません" % tc.N)

    fields = [[] for _ in range(tc.W)]
    for i, col in enumerate(output):
        if col < 0 or tc.W <= col:
            raise RuntimeError("[ERROR] %d行目 出力が不正です : %d" % (i + 1, col))
        fields[col].append(tc.blocks[i])

    score = 0
    for row in range(tc.N // tc.W):
        finish = False
        total = [0] * tc.K
        for col in range(tc.W):
            if len(fields[col]) <= row:
                finish = True
                break
            block = fields[col][row]
            total[block.color] += block.value
        if finish:
            break
        score += max(total)
    return score


def calc_score(N, W, K, V, cv, output):
    tc = TestCase(N=N, W=W, K=K, V=V, cv=cv)
    score = judge(tc, output)
    return score

import random

if __name__ == "__main__":
    N, W, K, V = map(int, input().split())
    cv = [list(map(int,input().split())) for _ in range(N)]


    max_itr = 100
    # max_itr = 1000
    output = [i%W for i in range(N)]
    score = calc_score(N, W, K, V, cv, output)
    import codecs
    for i in range(N):
        print(*output, sep="\n", end="\n", file=codecs.open('output.txt', 'w', 'utf-8'))

    tc = TestCase(N=N, W=W, K=K, V=V, cv=cv)
    fields = [[] for _ in range(tc.W)]
    for i, col in enumerate(output):
        fields[col].append(tc.blocks[i])

    score = 0
    for row in range(tc.N // tc.W):
        finish = False
        total = [0] * tc.K
        for col in range(tc.W):
            if len(fields[col]) <= row:
                finish = True
                break
            block = fields[col][row]
            total[block.color] += block.value
        if finish:
            break
        print(total)
        print(max(total))
        score += max(total)

    # print(str(0)+" "+str(score))
    # from_before_update = 0
    # for j in range(max_itr):
    #     # 直近10回以内に値の更新があったのならばランダムに試してみる
    #     if from_before_update <= 10:
    #         tmp_output = [random.randint(0,W-1) for i in range(N)]
    #         tmp_score = calc_score(N, W, K, V, cv, tmp_output)
    #     # 直近10回以内に値の更新がなかったのならば、今ある答えを改善してみる
    #     else:
    #         tmp_output = output.copy()
    #         for i in range(10):
    #             swap_index_a = random.randint(0,N)
    #             swap_index_b = random.randint(0,N)
    #             print(str(swap_index_a) + " " + str(swap_index_b))
    #             tmp_output[swap_index_a], tmp_output[swap_index_b] = tmp_output[swap_index_b], tmp_output[swap_index_a]
    #     if tmp_score >= score:
    #         from_before_update = 0
    #         output = tmp_output
    #         score = tmp_score
    #         print("@"+str(j)+" "+str(score)+" "+str(tmp_score))
    #         # print('--------------------')
    #         import codecs
    #         for i in range(N):
    #             print(*output, sep="\n", end="\n", file=codecs.open('output_'+str(j)+'.txt', 'w', 'utf-8'))
    #             # print(output[i])
    #         # print('--------------------')
    #     else:
    #         from_before_update+=1
    #         print(str(j)+" "+str(score)+" "+str(tmp_score))

    # for i in range(N):
        # print(output[i])
    print(score)

