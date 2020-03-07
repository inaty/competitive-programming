#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    bool is_reversed = false;
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
            is_reversed = !is_reversed;
        }else if(t==2){
            if(is_reversed==false){
            if (f==1){
                s.insert(s.begin(),c);
            }else if(f==2){
                s.push_back(c);
            }
            }
            if(is_reversed==true){
            if (f==1){
                s.push_back(c);
            }else if(f==2){
                s.insert(s.begin(),c);
            }
            }
        }
    }

    if (is_reversed==true){
        reverse(s.begin(),s.end());
    }

    cout << s << endl;
}