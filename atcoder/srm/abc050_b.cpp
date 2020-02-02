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
    vector<int> t(n);
    rep(i, n) cin >> t.at(i);
    int m;
    cin >> m;
    vector<int> p(m), x(m);
    rep(i, m) cin >> p.at(i) >> x.at(i);

    rep(i, m)
    {
        int answer = 0;
        rep(j, n)
        {
            if (p.at(i) != j + 1)
            {
                answer += t.at(j);
            }
            else
            {
                answer += x.at(i);
            }
        }
        cout << answer << endl;
    }
}