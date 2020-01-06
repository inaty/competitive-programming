#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n), c(m), d(m);
    rep(i, n) cin >> a.at(i) >> b.at(i);
    rep(i, m) cin >> c.at(i) >> d.at(i);

    vector<vector<int>> d(n, vector<int>(m));
    rep(i, n)
    {
        rep(j, m)
        {
            d.at(i).at(j) = abs(a.at(i) - c.at(j)) + abs(b.at(i) - c.at(j));
        }
    }

    rep(j, m)
    {
        int min_d = INT_MAX;
        rep(i, n)
        {
            if (d.at(i).at(j) != -1)
            {
            }
        }
    }
}