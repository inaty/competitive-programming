#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    ll a, b, k;
    cin >> a >> b >> k;

    if(a>=k){
        cout << a - k << " " << b << endl;
    }else if(a+b>=k){
        cout << 0 << " " << b+a-k << endl;
    }else{
        cout << 0 << " " << 0 << endl;
    }
}