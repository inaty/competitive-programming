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

long long int dp[100010];

int main()
{
    dp[0] = 0;
    for (int n = 1; n <= 100000; n++)
    {
        dp[n] = INT_MAX;
        int power = 1;
        while (power <= n)
        {
            chmin(dp[n], dp[n - power] + 1);
                power *= 6;
        }
        power = 1;
        while (power <= n)
        {
            chmin(dp[n], dp[n - power] + 1)
                power *= 9;
        }
    }
    int n;
    cin >> n;

    cout << dp[n] << endl;
}