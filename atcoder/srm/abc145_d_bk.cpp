#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long MOD = 1000000007;

int main()
{
    long long dp[110][110];
    // long long dp[1100000][1100000];
    // for (long long i = 0; i < 1100000; i++)
    for (long long i = 0; i < 110; i++)
    {
        // for (long long j = 0; j < 1100000; j++)
        for (long long j = 0; j < 110; j++)
        {
            dp[i][j] = 0;
        }
    }

    long long x, y;
    cin >> x >> y;

    dp[0][0] = 1;
    for (long long i = 0; i < x; i++)
    {
        for (long long j = 0; j < y; j++)
        {
            dp[i + 1][j + 2] = (dp[i + 1][j + 2] + dp[i][j]) % MOD;
            dp[i + 2][j + 1] = (dp[i + 2][j + 1] + dp[i][j]) % MOD;
        }
    }

    cout << dp[x][y] % MOD << endl;
}