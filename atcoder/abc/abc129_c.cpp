#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, m;
    cin >> n >> m;
    vector<bool> oks(n + 1, true);
    rep(i, m)
    {
        int a;
        cin >> a;
        oks[a] = false;
    }

    long long MOD = 1000000007;

    long long dp[100010];
    rep(i, 100010) dp[i] = 0;

    dp[0] = 1;
    if (oks[1])
        dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {

        if (oks[i - 1])
            dp[i] += dp[i - 1];
        if (oks[i - 2])
            dp[i] += dp[i - 2];

        dp[i] %= MOD;
    }

    cout << dp[n] << endl;
}