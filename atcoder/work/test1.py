
def is_heyhoo(s):
    rs = list(reversed(s))
    return list(s) == rs


n = int(input())
s = input()

answer = 0

while not is_heyhoo(s):
    for i in range(len(s)):
        is_same = False
        for j in range(i+1, len(s)):
            if s[i] == s[j]:
                is_same = True
        if is_same == False:
            answer += 1
            s = s[0:i] + s[i+1:]

print(answer)