#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    rep(i, n) cin >> a.at(i);

    long long MOD = 1000000007l;

    long long cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a.at(j) > a.at(i))
                cnt1++;
        }
    }

    long long cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a.at(j) > a.at(i))
                cnt2++;
        }
    }

    long long answer = (((cnt1 % MOD) * (k % MOD)) % MOD + (cnt2 % MOD) * ((k * (k - 1) / 2l) % MOD) % MOD) % MOD;
    cout << answer << endl;
}