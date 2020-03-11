#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> sugoroku(n), dice(m);
    rep(i,n) cin >> sugoroku.at(i);
    rep(i,m) cin >> dice.at(i);

    // cout << "---------" << endl;

    int answer = 0;
    int state = 1;
    int i = 0;
    while(state<n){
        answer++;
        state+=dice.at(i);
        if(state>=n) break;
        state+=sugoroku.at(state-1);
        state=max(1,state);
        i++;
        // cout << answer << " " << state << endl;
    }

    // cout << "---------" << endl;
    cout << answer << endl;
}