#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int MOD = 1000000007;

int main()
{
    int n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    long long answer = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            answer += ((a.at(i - 1) % MOD) ^ (a.at(j - 1) % MOD)) % MOD;
            answer %= MOD;
        }
    }

    cout << answer << endl;
}