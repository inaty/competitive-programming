# abc118_cの開放理解のためにユークリッドの互除法を実装してみる

def euclidian(a, b):
    if a < b:
        t = a
        a = b
        b = t

    while(True):
        print(a, b)
        if b == 0:
            return a
        t = b
        b = a % b
        a = t


if __name__ == '__main__':
    A, B = map(int, input().split())

    euc = euclidian(A, B)
    print('--------------')
    print(euc)
