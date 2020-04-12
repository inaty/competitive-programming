#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> a(m);
    rep(i,m) cin >> a.at(i);
    vector<vector<int>> b(m,vector<int>(n));
    rep(i,m){
        rep(j,n){
            cin >> b.at(i).at(j);
        }
    }

    vector<int> scores(n,0);
    rep(i,m){
        int target = a.at(i);
        int not_match_count = 0;
        rep(j,n){
            if (b.at(i).at(j)==target){
                scores.at(j) += 1;
            }else{
                not_match_count++;
            }
        }
        scores.at(target-1)+=not_match_count;
    }

    rep(i,n){
        cout << scores.at(i) << endl;
    }
}