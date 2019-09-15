class Solution:
    def reverseParentheses(self, s: str) -> str:
        def index_Multi(List, liter):
            # Listはリスト本体・literは検索したい文字
            index_L = []
            for val in range(0, len(List)):
                if liter == List[val]:
                    index_L.append(val)
            return index_L

        ls = list(s)
        llist = index_Multi(ls, "\(")
        rlist = index_Multi(ls, "\)")

        for i in range(len(llist)):
            li = llist[i]
            ri = list(reversed(rlist))[i]
            if ri - li >= 2:
                ls = ls[0:li] + ls[li:ri:-1] + ls[ri::]

        return "".join(ls)