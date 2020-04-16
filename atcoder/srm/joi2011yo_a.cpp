#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    vector<int> times(4);
    rep(i, 4) cin >> times.at(i);

    int total_time = 0;
    rep(i, 4) total_time += times.at(i);

    cout << total_time / 60 << endl;
    cout << total_time % 60 << endl;
}