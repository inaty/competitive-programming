#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    ll h, n;
    cin >> h >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a.at(i);

    ll sum_a = 0l;
    rep(i, n) sum_a += a.at(i);

    if (h - sum_a <= 0l)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}