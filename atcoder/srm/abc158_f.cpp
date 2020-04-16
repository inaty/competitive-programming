#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=998244353;
const long long INF = 1LL<<60;

int main() {
    ll n;
    cin >> n;
    vector<ll> x(n),d(n);
    for(ll i = 0;i<n;i++){
        cin >> x.at(i) >> d.at(i);
    }
}