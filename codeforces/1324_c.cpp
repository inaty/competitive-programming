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
    int t;
    cin >> t;
    rep(i, t)
    {
        string s;
        cin >> s;

        int n = int(s.size());

        s = 'R' + s + 'R';

        int max_continous_l_length = 0;
        int continous_l_length = 0;
        rep(j, n + 2)
        {
            if (s.at(j) == 'L')
            {
                continous_l_length++;
            }
            else
            {
                max_continous_l_length = max(max_continous_l_length, continous_l_length);
                continous_l_length = 0;
            }
        }
        cout << max_continous_l_length + 1 << endl;
    }
}