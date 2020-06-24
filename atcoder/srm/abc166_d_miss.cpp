#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

vector<long long> enum_divisors(long long N)
{
    vector<long long> res;
    for (long long i = 1; i * i <= N; ++i)
    {
        if (N % i == 0)
        {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N / i != i)
                res.push_back(N / i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
    return res;
}

void solve(ll x)
{
    const auto &res = enum_divisors(x);
    for (int i = 0; i < res.size(); ++i)
    {
        ll x1 = res[i], x2 = x / res[i];

        for (ll b = -x1; b < x1; b++)
        {
            ll a = x1 + b;
            if (a * a * a * a + a * a * a * b + a * a * b * b + a * b * b * b + b * b * b * b == x2)
            {
                cout << a << " " << b << endl;
                return;
            }
        }
    }
    return;
}

int main()
{
    ll x;
    cin >> x;
    solve(x);
}