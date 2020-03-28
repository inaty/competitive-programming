#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    vector<int> numbers(6);
    rep(i,6) cin >> numbers.at(i);

    sort(numbers.begin(),numbers.end(),greater<int>());

    cout << numbers.at(2) << endl;
}