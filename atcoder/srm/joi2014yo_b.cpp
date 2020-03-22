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
    vector<int> a(n), b(m);
    rep(i, n) cin >> a.at(i);
    rep(i, m) cin >> b.at(i);

    map<int, int> mp;
    rep(i, m)
    {
        rep(j, n)
        {
            if (a.at(j) <= b.at(i))
            {
                mp[j + 1]++;
                break;
            }
        }
    }


    int answer;
    int max_count = -1;
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        if (max_count < itr->second)
        {
            max_count = itr->second;
            answer = itr->first;
        }
    }

    cout << answer << endl;
}