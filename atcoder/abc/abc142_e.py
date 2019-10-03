def main():
    n, m = map(int,input().split())
    a_list = []
    b_list = []
    c_list = []
    for i in range(m):
        a, b = map(int,input().split())
        a_list.append(a)
        b_list.append(b)
        c_list.append(list(map(int,input().split())))

    # print(a_list)
    # print(b_list)
    # print(c_list)

    # 宝箱(key)別に最も安く開けることができる鍵の番号(value)
    min_price_key_each_box = {}
    for i in range(m):
        for box in c_list[i]:
            if not box in min_price_key_each_box.keys():
                min_price_key_each_box[str(box)] = i+1
            else:
                if a[i] < a[min_price_key_each_box[str(box)]]:
                    min_price_key_each_box[str(box)] = i+1

    set_b = set(list(range(1,n+1)))









if __name__ == '__main__':
