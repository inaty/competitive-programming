#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> a(n - 1);
    rep(i, n - 1) cin >> a.at(i);

    int sum_a = 0;
    rep(i, n - 1) sum_a += a.at(i);

    if (n * m - sum_a > k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << max(0, n * m - sum_a) << endl;
    }
}