import sys


if __name__ == '__main__':
    N = int(input())
    if N >= 42:
        N+=1
    print("AGC" + str(N).zfill(3))