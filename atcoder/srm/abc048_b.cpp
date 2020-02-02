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

// 0以上n以下の数字でxで割ることのできる数
ll f(ll n, ll x)
{
    if (n <= -1l)
    {
        return 0;
    }
    else
    {
        // 0が含まれる
        return n / x + 1;
    }
}

int main()
{
    ll a, b, x;
    cin >> a >> b >> x;

    cout << f(b, x) - f(a - 1, x) << endl;
}