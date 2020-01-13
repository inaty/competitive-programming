#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    string s;
    cin >> s;

    int n = int(s.size());

    for (int begin = 0; begin < n; begin++)
    {
        for (int end = begin; end <= n; end++)
        {
            string t = "";
            // [begin, end] の区間を切り取り、それ以外の部分の文字列でtを作る
            for (int i = 0; i < n; i++)
            {
                if (begin <= i && i < end)
                {
                    continue;
                }
                else
                {
                    t.push_back(s.at(i));
                }
            }

            if (t == "keyence")
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}