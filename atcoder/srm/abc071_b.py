if __name__ == '__main__':
    S = input()

    complement_S = list(set([chr(i) for i in range(ord('a'), ord('z')+1)]) - set(list(S)))

    if len(complement_S) == 0:
        print("None")
    else:
        print(min(complement_S))
