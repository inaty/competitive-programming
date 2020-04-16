#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    int n,m;
    cin >> n>>m;

    cout << n*(n-1)/2 + m*(m-1)/2 << endl;
}