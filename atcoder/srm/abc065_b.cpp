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
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    int answer = 0;
    int position = 1;
    for (int i = 0; i < n; i++)
    {
        if (position == 2)
        {
            break;
        }
        else
        {
            answer++;
            position = a.at(position - 1);
        }
    }
    if (position == 2)
    {
        cout << answer << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}