import sys


if __name__ == '__main__':
    alpha = input()
    if alpha in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ':
        print("A")
    elif alpha in 'abcdefghijklmnopqrstuvwxyz':
        print("a")
    else:
        print("Error!")
