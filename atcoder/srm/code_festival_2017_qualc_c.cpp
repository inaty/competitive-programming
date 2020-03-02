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
    string s;
    cin >> s;

    string not_x = "";
    for (int i = 0; i < int(s.size()); i++)
    {
        if (s.at(i) != 'x')
        {
            not_x += s.at(i);
        }
    }

    bool is_ok = true;
    for (int i = 0; i < int(not_x.size()) / 2; i++)
    {
        if (not_x.at(i) != not_x.at(int(not_x.size()) - 1 - i))
        {
            is_ok = false;
            break;
        }
    }

    if (is_ok == false)
    {
        cout << -1 << endl;
        return 0;
    }

    return 0;
}