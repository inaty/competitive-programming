import numpy as np

def check_is_all_black(matrix, H, W):
    for i in range(H):
        for j in range(W):
            if A[i,j] == 0:
               return True
    return False

if __name__ == '__main__':
    H, W = map(int, input().split())
    A =  np.array([list(map(int,map(lambda s: '1' if s == ['#'] else '0', map(list, input())))) for i in range(H)])

    answer = 0
    while check_is_all_black(A,H,W):
        answer += 1
        tmp_A = np.array([[0]*W]*H)

        for i in range(H):
            for j in range(W):
                if A[i,j] == 0:
                    if i >= 1:
                        if A[i-1,j] == 1:
                            tmp_A[i,j] = 1
                    if i <= H-2:
                        if A[i+1,j] == 1:
                            tmp_A[i,j] = 1
                    if j >= 1:
                        if A[i,j-1] == 1:
                            tmp_A[i,j] = 1
                    if j <= W-2:
                        if A[i,j+1] == 1:
                            tmp_A[i,j] = 1
                else:
                    tmp_A[i,j] = 1
        A = tmp_A

    print(answer)

