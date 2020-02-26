#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    if (a==b && a!=c){
        cout << "Yes" << endl;
    }else if (a==c && a!=b){
        cout << "Yes" << endl;
    }else if (b==c && b!=a){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}