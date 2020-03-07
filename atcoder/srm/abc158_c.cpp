#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    int a,b;
    cin >> a >> b;

    int answer = -1;
    for(int i = 1;i<=100000;i++){
        if(int(i*0.08)==a && int(i*0.1)==b){
            answer = i;
            break;
        }
    }

    cout << answer << endl;
}