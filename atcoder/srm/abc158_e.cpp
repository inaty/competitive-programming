#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    ll n,p;
    cin >> n >> p;
    string s;
    cin >> s;

    ll counter = 0;
    ll answer = 0;
    for(ll i = 0;i<=n-1;i++){
        for(ll j = i+1;j<=n;j++){
            // cout << i << " " << j << endl;
            counter++;
            istringstream ss = istringstream(s.substr(i,j-i));
            ll num;
            ss >> num;
            if(num%p==0){
                answer++;
                // cout << s.substr(i,j-i) << " " << num << " " << num%p << endl;
            } else {
                cout << s.substr(i,j-i) << " " << num << " " << num%p << endl;
            }
        }
    }
    // cout << counter << endl;
    cout << answer << endl;
}