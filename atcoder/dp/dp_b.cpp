#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// change minimum
// aよりbが小さかったら、aの値をbの値に置き換えて、trueを返す
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

int main()
{
    int n, k;
    cin >> n >> k;
    long long int h[110010];
    rep(i, n) cin >> h[i];

    long long int INF = LONG_LONG_MAX;
    long long dp[11000];
    rep(i, 11000) dp[i] = INF;

    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            chmin(dp[i + j], dp[i] + abs(h[i + j] - h[i]));
        }
    }

    cout << dp[n - 1] << endl;
}