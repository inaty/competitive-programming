#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    // 「1 が連続するところ」が何箇所あるかを数える
    // http://drken1215.hatenablog.com/entry/2019/03/03/150200

    // 区間を分割する
    int i = 0;
    while (i < n)
    {
        if (h[i] == 0)
        {
            ++i; // 0なら何もせずに次に進む
        }
        else
        {
            ++res; // 区間の始まり
            while (i < n && h[i] > 0)
            {
                ++i; // 区間の終わりまで
            }
        }
    }
}