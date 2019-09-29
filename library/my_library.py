#nの素数判定
def is_prime(n):
    if n == 1:
        return False
    for i in range(2,int(n**0.5)+1):
        if n % i == 0:
            return False
    return True


#nの約数列挙
def divisor(n):
    ass = []
    for i in range(1,int(n**0.5)+1):
        if n%i == 0:
            ass.append(i)
            ass.append(n//i)
    return ass #sortされていない


#nの素因数分解(O(n**0.5)
def prime_factor(n):
    ass = []
    for i in range(2,int(n**0.5)+1):
        while n % i==0:
            ass.append(i)
            n = n//i
    if n != 1:
        ass.append(n)
    return ass


'''
切り上げを行う関数
参考(https://qiita.com/drken/items/fd4e5e3630d0f5859067#5-%E9%81%8E%E5%8E%BB%E5%95%8F%E7%B2%BE%E9%81%B8-10-%E5%95%8F)：
aをbで割った余りを切り上げる処理はまとめて (a + b - 1) / b と簡潔に書くことができます
'''


def round_up(divided_number, devide_by_number):
    return (divided_number + devide_by_number - 1)//devide_by_number


if __name__ == '__main__':
    print('4を2で割ってき上げた数')
    print(round_up(4, 2))

    print('8を3で割ってき上げた数')
    print(round_up(8, 3))


    # bit全探索
    for i in range(2**3):
        print(i)
        for j in range(3):
            print((i >> j) & 1)
        print("-----------------")
