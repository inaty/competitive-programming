#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0;i<n;i++){
        cin >> a.at(i);
    }

    map<ll,ll> mp_all;
    for(ll i = 0;i<n;i++){
        mp_all[a.at(i)]++;
    }

    ll count_all = 0;
    for(auto itr = mp_all.begin();itr!=mp_all.end();itr++){
        count_all+= (itr->second)*(itr->second-1)/2;
    }

    map<ll,ll> mp_answers;
    for(auto itr = mp_all.begin();itr!=mp_all.end();itr++){
        ll number = itr->first, count = itr-> second;
        ll count_without_number = count_all - count*(count-1)/2 + (count-1)*(count-2)/2;
        mp_answers[number] = count_without_number;
    }

    for(ll i = 0;i<n;i++){
        cout << mp_answers[a.at(i)] << endl;
    }
}