#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// change maximum
// aよりbが大きかったら、aの値をbの値に置き換えて、trueを返す
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

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    rep(i, n) cin >> a.at(i) >> b.at(i) >> c.at(i);

    long long int dp[110000][3];
    rep(i, 110000)
    {
        dp[i][0] = 0;
        dp[i][1] = 0;
        dp[i][2] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        chmax(dp[i + 1][0], max(dp[i][1] + b.at(i), dp[i][2] + c.at(i)));
        chmax(dp[i + 1][1], max(dp[i][0] + a.at(i), dp[i][2] + c.at(i)));
        chmax(dp[i + 1][2], max(dp[i][0] + a.at(i), dp[i][1] + b.at(i)));
    }

    cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << endl;
}