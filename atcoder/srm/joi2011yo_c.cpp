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
    int k;
    cin >> k;
    vector<int> a(k), b(k);
    rep(i, k) cin >> a.at(i) >> b.at(i);

    rep(i, k)
    {
        int min_diff = min(a.at(i), min(n + 1 - a.at(i), min(b.at(i), n + 1 - b.at(i))));
        int color = (min_diff-1) % 3 + 1;
        cout << color << endl;
    }
}