#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    vector<int> pasta(3), juice(2);
    rep(i,3) cin >> pasta.at(i);
    rep(i,2) cin >> juice.at(i);

    cout << min(pasta.at(0),min(pasta.at(1),pasta.at(2))) + min(juice.at(0),juice.at(1)) - 50 << endl;
}