#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    int n, s, t;
    cin >> n >> s >>t;
    int w;
    cin >> w;
    vector<int> a(n);
    a.at(0) = 0;
    for(int i = 1;i<n;i++) cin >> a.at(i);

    int answer = 0;
    if (s<=w&&w<=t) answer++;
    for(int i = 1;i<n;i++){
        w+=a.at(i);
        if (s<=w&&w<=t) answer++;
    }

    cout << answer << endl;
}