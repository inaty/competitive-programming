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

const long long INF = 1LL << 60;

const int MAX_N = 110;
const int MAX_V = 100100;

// i-1番目までの品物から価値がsum_v以上を達成するように選んだとき、重さの総和の最小値
long long dp[MAX_N][MAX_V];

int main()
{
    long long N, W;
    cin >> N >> W;
    long long w[N], v[N];
    rep(i, N) cin >> w[i] >> v[i];

    rep(i, MAX_N)
    {
        rep(j, MAX_V)
        {
            dp[i][j] = INF;
        }
    }

    dp[0][0] = 0;

    for (long long i = 0; i < N; i++)
    {
        for (long long sum_v = 0; sum_v < MAX_V; ++sum_v)
        {
            // i番目の品物を選ぶとき
            if (sum_v - v[i] >= 0)
                chmin(dp[i + 1][sum_v], dp[i][sum_v - v[i]] + w[i]);

            // i番目の品物を選ばないとき
            chmin(dp[i + 1][sum_v], dp[i][sum_v]);
        }
    }

    long long answer = 0;
    for (long long sum_v = 0; sum_v < MAX_V; ++sum_v)
    {
        if (dp[N][sum_v] <= W)
            answer = sum_v;
    }

    cout << answer << endl;
}