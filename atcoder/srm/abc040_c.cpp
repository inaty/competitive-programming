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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    long long INF = LONG_LONG_MAX;
    long long dp[100010];
    rep(i, 100010) dp[i] = INF;

    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        chmin(dp[i], dp[i - 1] + abs(a.at(i) - a.at(i - 1)));

        if (i > 1)
            chmin(dp[i], dp[i - 2] + abs(a.at(i) - a.at(i - 2)));
    }

    cout << dp[n - 1] << endl;
}