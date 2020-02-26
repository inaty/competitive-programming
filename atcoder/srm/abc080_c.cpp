#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> f(n, vector<int>(10));
    rep(i, n)
    {
        rep(j, 10)
        {
            cin >> f.at(i).at(j);
        }
    }
    vector<vector<int>> p(n, vector<int>(11));
    rep(i, n)
    {
        rep(j, 11)
        {
            cin >> p.at(i).at(j);
        }
    }

    int profit = -INT_MAX;
    for (int bit = 0; bit < (1 << 10); bit++)
    {
        vector<int> s(10);
        int open_count = 0;
        for (int i = 0; i < 10; i++)
        {
            s.at()
            // if (bit & (1 << i))
            // {
                // s.push_back(i);
                if (i >= 1)
                {
                    open_count++;
                }
            // }
        }

        cout << bit << ": {";
        for (int i = 0; i < (int)s.size(); ++i)
        {
            cout << s[i] << " ";
        }
        cout << "}" << endl;

        cout << open_count << endl;

        if (open_count >= 1)
        {
            int tmp_profit = 0;
            for (int i = 0; i < 10; i++)
            {
                cout << "s start" << endl;
                int all_open_count = s.at(i);
                cout << "s end" << endl;
                for (int j = 0; j < n; j++)
                {
                    cout << "loop:" << i << " " << j << endl;
                    all_open_count += f.at(j).at(i);
                }
                cout << "loopend:" << i << " " << all_open_count << endl;
                tmp_profit += p.at(i).at(all_open_count);
                cout << "hoge" << endl;
            }
            profit = max(profit, tmp_profit);
        }
    }

    cout << profit << endl;
}