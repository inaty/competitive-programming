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
    vector<string> s(n);
    rep(i, n) cin >> s.at(i);

    map<string, int> mp;
    rep(i, n)
    {
        mp[s.at(i)]++;
    }

    int max_value = 0;
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        max_value = max(max_value, itr->second);
    }

    map<string, int> mp2;
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        if (max_value == itr->second)
        {
            mp2[itr->first]++;
        }
    }

    for (auto itr = mp2.begin(); itr != mp2.end(); itr++)
    {
        cout << itr->first << endl;
    }
}