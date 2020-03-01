#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    vector<vector<bool>> is_ok(101, vector<bool>(101, true));
    rep(i, n)
    {
        int x, y;
        cin >> x >> y;
        is_ok.at(x).at(y) = false;
    }

    vector<vector<int>> dp(101, vector<int>(101, 0));
    dp.at(1).at(1) = 1;

    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 100; j++)
        {
            if (i == 1 && j == 1)
            {
                continue;
            }
            if (is_ok.at(i - 1).at(j))
                dp.at(i).at(j) += dp.at(i - 1).at(j);
            if (is_ok.at(i).at(j - 1))
                dp.at(i).at(j) += dp.at(i).at(j - 1);
        }
    }

    cout << dp.at(a).at(b) << endl;
}