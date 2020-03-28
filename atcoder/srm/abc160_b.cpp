#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    ll x;
    cin >> x;

    ll answer = x/500 * 1000 + (x%500)/5 * 5;
    cout << answer << endl;
}