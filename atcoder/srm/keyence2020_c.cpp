#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    int n, k, s;
    cin >> n >> k >> s;

    vector<ll> accum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        accum.at(i) = i + accum.at(i - 1);
    }

    
}