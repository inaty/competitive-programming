#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    int x;
    cin >> x;
    int y = 1000 - x;

    int answer = 0;
    answer+=(int)(y/500);
    y-=(int)(y/500)*500;
    answer+=(int)(y/100);
    y-=(int)(y/100)*100;
    answer+=(int)(y/50);
    y-=(int)(y/50)*50;
    answer+=(int)(y/10);
    y-=(int)(y/10)*10;
    answer+=(int)(y/5);
    y-=(int)(y/5)*5;
    answer+=y;

    cout << answer << endl;
}