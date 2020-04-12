#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    ll n;
    cin >> n;

    ll answer = 0;
    for (ll i = 1; i <= n;i++){
        if(i%3!=0 && i%5!=0)
            answer += i;
    }
    cout << answer << endl;
}