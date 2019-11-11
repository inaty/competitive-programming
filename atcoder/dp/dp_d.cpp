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

// dp[i][sum_w]:i-1番目までの品物から重さsum_wを超えないように選んだときの、価値の総和の最大値
long long int dp[110][110000] = {0};

int main()
{
    long long int N, W;
    cin >> N >> W;
    long long int w[110], v[110];
    rep(i, N) cin >> w[i] >> v[i];

    for (long long int i = 0; i < N; i++)
    {
        for (long long int sum_w = 0; sum_w <= W; ++sum_w)
        {
            // i番目の品物を選ぶ場合
            if (sum_w - w[i] >= 0)
            {
                chmax(dp[i + 1][sum_w], dp[i][sum_w - w[i]] + v[i]);
            }

            // i番目の品物を選ばない場合
            chmax(dp[i + 1][sum_w], dp[i][sum_w]);
        }
    }

    // for (long long int i = 0; i < N; i++)
    // {
    //     for (long long int sum_w = 0; sum_w <= W; ++sum_w)
    //     {
    //         cout << i << " " << sum_w << " " << dp[i][sum_w] << endl;
    //     }
    // }

    cout << dp[N][W] << endl;
}