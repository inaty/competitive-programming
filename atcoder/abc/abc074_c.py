if __name__ == '__main__':
    A, B, C, D, E, F = map(int, input().split())

    answer_sugarwater = -1
    answer_sugar = -1
    max_strength = -1

    for a in range(0,F//(100*A)+1):
        for b in range(0,(F-a*A)//(100*B)+1):
            water = 100*(a*A+b*B)
            for c in range(0, (F-water)//C+1):
                for d in range(0, (F-water-c*C)//D+1):
                    if water == 0:
                        continue
                    sugar = c*C+d*D
                    strength = 100 * sugar / (water + sugar)
                    # print(str(water) + ' ' + str(sugar) + ' ' + str(strength))
                    if max_strength < strength and water + sugar <= F and sugar <= water/100*E:
                        max_strength = strength
                        answer_sugarwater = water + sugar
                        answer_sugar = sugar
    print(str(answer_sugarwater) + ' ' + str(answer_sugar))



