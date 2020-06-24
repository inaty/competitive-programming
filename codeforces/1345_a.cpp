#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

void solve(int n, int m)
{
    // どちらかが1ならばOK
    if (n == 1 || m == 1)
    {
        cout << "YES" << endl;
        return;
    }
    // ロの形に繋いで、真ん中に空洞ができればNO
    if ((n <= 2) && (m <= 2))
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
        return;
    }
}

int main()
{
    int t;
    cin >> t;

    rep(i, t)
    {
        int n, m;
        cin >> n >> m;
        solve(n, m);
    }
}