def all_children(node_no, direct_children_list):
    res = set([])
    direct_children = direct_children_list[node_no]
    if len(direct_children) == 0:
        return set([node_no])
    for child in direct_children:
        res = res | set([child]) | all_children(child, direct_children_list)
    return res | set([node_no])


if __name__ == '__main__':
    n, q = map(int,input().split())
    ab = [list(map(int,input().split())) for i in range(n-1)]
    px = [list(map(int,input().split())) for i in range(q)]

    ab = sorted(ab, key=lambda x:x[0])

    direct_children = [set() for i in range(n)]
    direct_parent = [set() for i in range(n)]
    levels = [0 for i in range(n)]

    for i in range(n-1):
        a, b = ab[i]
        direct_children[a - 1].add(b - 1)
        direct_parent[b - 1].add(a - 1)

    # 前子ノードの列挙
    children = [set() for i in range(n)]
    for i in range(n):
        children[i] = all_children(i, direct_children)
    # print(children)

    counters = [0 for i in range(n)]
    # operation
    for i in range(q):
        p,x  = px[i]
        add_child = children[p-1]
        # print(add_child)
        for child_index in children[p-1]:
            counters[child_index] += x

    print(" ".join(list(map(str, counters))))


