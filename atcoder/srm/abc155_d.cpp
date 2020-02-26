#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    ll n, k;
    cin >> n >> k;
    ll posi_num = 0, zero_num = 0, nega_num = 0;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a.at(i);
        if (a.at(i) < 0)
        {
            nega_num++;
        }
        else if (a.at(i) > 0)
        {
            posi_num++;
        }
        else
        {
            zero_num++;
        }
    }

    vector<ll> nega_a(nega_num), posi_a(posi_num);

    ll nega_index = 0;
    ll posi_index = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a.at(i) < 0)
        {
            nega_a.at(nega_index) = a.at(i);
            nega_index++;
        }
        else if (a.at(i) > 0)
        {
            posi_a.at(posi_index) = a.at(i);
            posi_index++;
        }
    }

    sort(posi_a.begin(), posi_a.end());
    sort(nega_a.begin(), nega_a.end());

    ll total_nega_num = nega_num * posi_num;
    ll total_zero_num = zero_num * (posi_num + nega_num) + zero_num * (zero_num - 1) / 2;
    ll total_posi_num = n * (n - 1) / 2 - total_zero_num - total_nega_num;

    if (k <= total_nega_num)
    {
        for (ll i = 0; i < nega_num;i++){
            for (ll j = posi_num - 1; j >= 0;j++){
                
            }
        }
    }
    else if (k <= total_nega_num + total_zero_num)
    {
        cout << 0 << endl;
    }
    else
    {
    }

    // map<ll, ll> mp;
    // for (ll i = 0; i < n; i++)
    // {
    //     for (ll j = i + 1; j < n; j++)
    //     {
    //         mp[a.at(i) * a.at(j)]++;
    //     }
    // }

    // ll key, value;
    // for (auto itr = mp.begin(); itr != mp.end(); itr++)
    // {
    //     key = itr->first;
    //     value = itr->second;
    //     k -= value;
    //     if (k <= 0)
    //     {
    //         cout << key << endl;
    //         return 0;
    //     }
    // }

    // cout << key << endl;
    // return 0;
}