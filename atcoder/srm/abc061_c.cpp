#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n), b(n);
    rep(i, n) cin >> a.at(i) >> b.at(i);

    map<long long, long long> mp;
    rep(i, n)
    {
        mp[a.at(i)] += b.at(i);
    }

    long long cnt = k;
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        long long key = i->first, value = i->second;
        // cout << key << "->" << value << " " << cnt << endl;
        cnt -= value;
        if (cnt <= 0)
        {
            cout << key << endl;
            break;
        }
    }
}