"""
A - Buttons
https://atcoder.jp/contests/abc124/tasks/abc124_a
"""
if __name__ == '__main__':
    input_list = list(map(int, input().split()))
    a = input_list[0]
    b = input_list[1]
    button_suspects = sorted([a, a-1, b, b-1], reverse=True)
    answer = button_suspects[0] + button_suspects[1]
    print(answer)