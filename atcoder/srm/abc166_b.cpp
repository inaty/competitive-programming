#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n, k;
    cin >> n >> k;

    map<int, int> mp;

    rep(i, k)
    {
        int d;
        cin >> d;
        vector<int> a(d);
        rep(j, d) cin >> a.at(j);

        rep(j, d)
        {
            mp[a.at(j)]++;
        }
    }

    cout << n - int(mp.size()) << endl;
}