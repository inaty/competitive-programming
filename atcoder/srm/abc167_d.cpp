#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a.at(i);

    vector<int> log;
    map<int, int> mp;
    vector<int> junkan;
    int position = 1;
    mp[position]++;
    int to_junkan_length = 0;
    bool is_junkan = false;
    rep(i, 3 * n)
    {
        int next_position = a.at(position - 1);
        log.push_back(position);
        mp[next_position]++;
        if (is_junkan == false)
        {
            to_junkan_length++;
        }
        if (mp[next_position] == 2)
        {
            is_junkan = true;
            junkan.push_back(next_position);
        }
        position = next_position;
    }

    to_junkan_length -= (int)junkan.size();

    if (k <= to_junkan_length)
    {
        cout << log.at(k) << endl;
    }
    else
    {
        cout << junkan.at((k - to_junkan_length) % ((int)junkan.size())) << endl;
    }
}