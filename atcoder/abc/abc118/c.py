def euclid_gcd(a, b):
    if a < b:
        tmp = a
        a = b
        b = tmp
    if b == 0:
        return a
    else:
        return euclid_gcd(b, a % b)

def gcd(n_list):
    ans = n_list[0]
    for n in n_list:
       ans = euclid_gcd(ans, n)
    return ans



if __name__ == '__main__':
    N = int(input())
    A = list(map(int, input().split()))

    answer = gcd(A)

    print(answer)