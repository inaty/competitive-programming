class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        ltext = list(text)
        lballoon = list("balloon")

        answer = 0
        while(True):
            isFind = True
            for e in lballoon:
                if e in ltext:
                    ltext.remove(e)
                else:
                    return answer
            answer+=1