#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    string s;
    cin >> s;
    int q;
    cin >> q;
    rep(i,q){
        int t;
        cin >> t;
        int f;
        char c;
        if(t==2){
            cin >> f >> c;
        }

        // 処理
        if(t==1){
            reverse(s.begin(),s.end());
        }else if(t==2){
            if (f==1){
                s.insert(s.begin(),c);
            }else if(f==2){
                s.push_back(c);
            }
        }
    }

    cout << s << endl;
}