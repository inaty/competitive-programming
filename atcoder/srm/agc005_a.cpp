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
    string X;
    cin >> X;

    int max_t_index = -1;
    for (int i = 0; i < int(X.size()); i++)
    {
        if (X.at(i) == 'T')
        {
            max_t_index = max(max_t_index, i);
        }
    }

    cout << (int(X.size()) - (max_t_index + 1)) * 2 << endl;
}