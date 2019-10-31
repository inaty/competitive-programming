#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long dp[100010];

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, n) cin >> h.at(i);

    dp[0] = 0;
    dp[1] = dp[0] + abs(h.at(1) - h.at(0));
    for (int i = 2; i < n; i++)
    {
        dp[i] = min(dp[i - 1] + abs(h.at(i) - h.at(i - 1)), dp[i - 2] + abs(h.at(i) - h.at(i - 2)));
    }

    cout << dp[n - 1] << endl;
}