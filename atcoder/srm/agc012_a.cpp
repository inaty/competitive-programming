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
    vector<int> a(3 * n);
    rep(i, 3 * n) cin >> a.at(i);

    sort(a.begin(), a.end(), greater<int>());

    ll answer = 0;
    ll count = 1;
    for (int i = 1; i < 3 * n; i += 2)
    {
        if (count > n)
            break;
        answer += a.at(i);
        count++;
    }

    cout << answer << endl;
}