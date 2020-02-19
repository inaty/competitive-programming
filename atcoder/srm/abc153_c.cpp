#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> h(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> h.at(i);
    }

    if (k >= n)
    {
        cout << 0 << endl;
        return 0;
    }

    sort(h.begin(), h.end(), greater<ll>());

    ll answer = 0l;
    for (ll i = k; i < n; i++)
    {
        answer += h.at(i);
    }

    cout << answer << endl;
}