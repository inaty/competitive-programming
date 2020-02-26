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
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n), mb(n);
    rep(i, n) cin >> a.at(i);
    rep(i, n) cin >> b.at(i);
    rep(i, n) cin >> c.at(i);
    rep(i, n) mb.at(i) = -b.at(i);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    ll answer = 0;
    for (int bi = 0; bi < n; bi++)
    {
        ll ai_max = lower_bound(a.begin(), a.end(), b.at(bi)) - a.begin();
        ll ci_min = c.end() - upper_bound(c.begin(), c.end(), b.at(bi));
        answer += ai_max * ci_min;
    }

    cout << answer << endl;
}