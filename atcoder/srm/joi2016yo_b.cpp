#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    for (int k = 1; k <= m; k++)
    {
        int i = 1;
        while (i < n)
        {
            if (a.at(i-1) % k > a.at(i) % k)
            {
                swap(a.at(i - 1), a.at(i));
            }
            i++;
        }
    }


    rep(i, n) cout << a.at(i) << endl;
}