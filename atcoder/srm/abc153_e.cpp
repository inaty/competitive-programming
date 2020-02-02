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
    int h, n;
    cin >> h >> n;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a.at(i) >> b.at(i);

    vector<vector<ll>> dp(n + 1, vector<ll>(h + 1, INF));
    dp[0][0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= h; j++)
        {
            chmin(dp[i + 1][j], dp[i][j]);
            chmin(dp[i + 1][min(j + a[i], h)], dp[i + 1][j] + b[i]);
        }
    }

    cout << dp[n][h] << endl;
}