if __name__ == '__main__':
    S = list(input())
    a,b,c,d = map(int,input().split())

    S.insert(d,"\"")
    S.insert(c,"\"")
    S.insert(b,"\"")
    S.insert(a,"\"")
    print("".join(S))


