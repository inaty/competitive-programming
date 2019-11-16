import itertools

if __name__ == '__main__':
    N = int(input())

    answer = 0

    for i_repeat in range(1, len(str(N))+1):
        for i in itertools.product([7, 5, 3], repeat=i_repeat):
            i_list = list(i)
            str_i_list = str(i_list)
            cnt_7 = str_i_list.count('7')
            cnt_5 = str_i_list.count('5')
            cnt_3 = str_i_list.count('3')
            if cnt_7 >= 1 and cnt_5 >= 1 and cnt_3 >= 1:
                num = 0
                for j, e in enumerate(i_list):
                    num += int(e) * pow(10, len(i_list)-j-1)
                if num <= N:
                    answer += 1
    print(answer)
