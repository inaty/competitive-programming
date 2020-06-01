#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

void solve(ll x)
{
    for (ll a = -1000; a <= 1000; a++)
    {
        for (ll b = -1000; b <= 1000; b++)
        {
            if (a * a * a * a * a - b * b * b * b * b == x)
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