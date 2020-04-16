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

    ll yesterday_a = a.at(0);
    for(ll i = 1;i<n;i++){
        ll diff = a.at(i) - yesterday_a;

        if(diff == 0){
            cout << "stay" << endl;
        }else if(diff<0){
            cout << "down " << -1 * diff  << endl;
        }else if(diff>0){
            cout << "up " << diff  << endl;
        }
        yesterday_a = a.at(i);

    }
}