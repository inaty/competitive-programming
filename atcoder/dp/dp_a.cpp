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
    // DPの初期値
    const long long INF = 1LL << 60;

    // DPテーブル (少し大きめに確保)
    long long dp[100010];

    // DPの初期化
    for (int i = 0; i < 100010; ++i)
        dp[i] = INF;

    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, n) cin >> h.at(i);

    dp[0] = 0;
    for (int i = 1; i < n; ++i)
    {
        chmin(dp[i], dp[i - 1] + abs(h.at(i) - h.at(i - 1)));
        if (i > 1)
        {
            chmin(dp[i], dp[i - 2] + abs(h.at(i) - h.at(i - 2)));
        }
    }

    cout << dp[n - 1] << endl;
}