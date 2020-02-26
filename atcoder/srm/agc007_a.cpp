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
    vector<vector<int>> dxdy = {{1, 1}, {1, 0}, {0, 1}};

    int h, w;
    cin >> h >> w;
    vector<string> a(h + 2, "");
    for (int i = 0; i < h + 2; i++)
    {
        for (int j = 0; j < w + 2; j++)
        {
            a.at(i) += ".";
        }
    }
    rep(i, h)
    {
        string tmp;
        cin >> tmp;
        tmp = '.' + tmp + '.';
        a.at(i + 1) = tmp;
    }
    // rep(i, h + 2)
    // {
    //     cout << a.at(i) << endl;
    // }

    
}