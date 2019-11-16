from datetime import datetime as dt


if __name__ == '__main__':
    S = str(input())

    last_day = dt.strptime('2019/04/30', '%Y/%m/%d')
    S_datetime = dt.strptime(S, '%Y/%m/%d')


    if S_datetime <= last_day:
        print('Heisei')
    else:
        print('TBD')
