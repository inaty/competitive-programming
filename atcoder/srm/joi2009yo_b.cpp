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
    vector<int> w_members(10), k_members(10);
    rep(i, 10) cin >> w_members.at(i);
    rep(i, 10) cin >> k_members.at(i);
    sort(w_members.begin(), w_members.end(), greater<int>());
    sort(k_members.begin(), k_members.end(), greater<int>());

    int w_point = w_members.at(0) + w_members.at(1) + w_members.at(2);
    int k_point = k_members.at(0) + k_members.at(1) + k_members.at(2);

    cout << w_point << " " << k_point << endl;
}