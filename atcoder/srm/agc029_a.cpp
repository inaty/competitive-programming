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

    ll answer = 0;
    ll goal = 0;
    for (int i = 0; i < int(s.size()); i++)
    {

        if (s.at(i) == 'W')
        {
            if (goal <= i)
            {
            answer += i - goal;
            goal++;
            }
        }
    }

    cout << answer << endl;
}