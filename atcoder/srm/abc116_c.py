def ope(h_list):
    min_h = min(h_list)
    max_h = max(h_list)
    if min_h == max_h:
        return min_h
    else:
        h_minus_min_h = map(lambda x: x - min_h, h_list)
        str_h_minus_min_h = ','.join(map(str, h_minus_min_h))
        next_h_listes = [s.replace(',0', '') for s in str_h_minus_min_h.split('0,') if s]
        next_h_listes = [lambda s : map(int, s.split(',')), next_h_listes]
        return min_h + sum(map(ope, next_h_listes))

def inpl(): return list(map(int, input().split()))



if __name__ == '__main__':
    N = int(input())
    A = inpl()

    print(ope(h_list))

    # answer = 0
    # min_h = min(h)
    # answer += min_h
    # h = map(lambda x: x - min_h, h)
    #
    # str_h = ','.join(map(str, h))
    #
    # h = str_h.split('0,')
    # h = [x for x in h if x]
    # h = [int(x) for x in h]
    #
    # print(h)


