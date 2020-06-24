#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a.at(i);
    map<ll, set<ll>> mp;
    for (ll i = 0; i < n; i++)
    {
        if (mp.count(a.at(i)) == 0)
        {
            mp[a.at(i)] = {};
        }
        mp[a.at(i)].insert(i);
    }

    ll answer = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if (j - i == a.at(i) + a.at(j))
                answer++;
        }
    }

    cout << answer << endl;

    set<ll> st = mp[8];
    for (auto itr = st.begin(); itr != st.end(); itr++)
    {
        cout << *itr << endl;
    }
}