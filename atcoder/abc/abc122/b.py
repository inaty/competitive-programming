"""
B - ATCoder
https://atcoder.jp/contests/abc122/tasks/abc122_b
"""
if __name__ == '__main__':
    S = str(input())

    length = 0
    answer = 0
    for e in S:
        if e in 'ACGT':
            length += 1
            answer = max(answer, length)
        else:
            length = 0

    print(answer)
