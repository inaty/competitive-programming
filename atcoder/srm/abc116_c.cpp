#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> h(n), h2(n, 0);
    rep(i, n)
    {
        cin >> h.at(i);
    }

    // 高さが0になるまでやる
    int res = 0;
    while (true)
    {
        // 高さの最高が0だったらループを抜ける
        if (*max_element(h.begin(), h.end()) == 0)
            break;

        // 区間の分割を行う
        int i = 0;
        while (i < n)
        {
            if (h.at(i) == 0)
            {
                ++i; // 0なら何もしないで次に進む
            }
            else
            {
                ++res; // 区間の始まり
                while (i < n && h.at(i) > 0)
                {
                    --h.at(i); //高さを引く
                    ++i;       // 区間の終わりまで続ける
                }
            }
        }
    }

    cout << res << endl;
}