#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    vector<int> a(4),b(4);
    cin >> a.at(0) >> a.at(1) >> a.at(2) >> a.at(3);
    cin >> b.at(0) >> b.at(1) >> b.at(2) >> b.at(3);

    int sum_a=0, sum_b=0;
    rep(i,4){
        sum_a+=a.at(i);
        sum_b+=b.at(i);
    }

    if(sum_a>=sum_b){
        cout << sum_a << endl;
    }else{
        cout << sum_b << endl;
    }
}