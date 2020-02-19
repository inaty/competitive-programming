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
    int n, k;
    cin >> n >> k;
    vector<int> t(n);
    rep(i, n) cin >> t.at(i);

    int answer = -1;
    for (int i = 2; i < n; i++)
    {
        if (t.at(i - 2) + t.at(i - 1) + t.at(i) < k)
        {
            answer = i + 1;
            break;
        }
    }

    cout << answer << endl;
}