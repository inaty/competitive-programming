#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    int n, k;
    cin >> k >> n;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);

    int answer = a.at(n-1) - a.at(0);
    for(int i = 0;i < n-1;i++){
        answer = min(answer, k-(a.at(i+1)-a.at(i)));
    }

    cout << answer << endl;
}