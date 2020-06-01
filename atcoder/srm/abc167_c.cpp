#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> c(n);
    vector<vector<int>> a(n, vector<int>(m));
    rep(i, n)
    {
        cin >> c.at(i);
        rep(j, m)
        {
            cin >> a.at(i).at(j);
        }
    }

    int answer = INT_MAX;
    for (int bit = 0; bit < (1 << n); ++bit)
    {
        vector<int> s; // 選ばれた参考書
        for (int i = 0; i < n; ++i)
        {
            if (bit & (1 << i))
            {
                s.push_back(i);
            }
        }

        vector<int> sum_algo(m, 0);
        int price = 0;
        for (int i = 0; i < (int)s.size(); ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                sum_algo.at(j) += a.at(s.at(i)).at(j);
            }
            price += c.at(s.at(i));
        }

        bool is_all_ok = true;
        rep(i, m)
        {
            if (sum_algo.at(i) < x)
            {
                is_all_ok = false;
            }
        }

        if (is_all_ok)
            answer = min(answer, price);
    }

    if (answer == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << answer << endl;
    }
}