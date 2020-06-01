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
    int t;
    cin >> t;
    rep(i, t)
    {
        int n;
        cin >> n;
        vector<int> a(2 * n);
        rep(j, 2 * n) cin >> a.at(j);

        sort(a.begin(), a.end(), greater<int>());

        cout << a.at(n-1) - a.at(n) << endl;
    }
}