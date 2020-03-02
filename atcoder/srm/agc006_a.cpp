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
    string s, t;
    cin >> s >> t;

    int s_size = int(s.size()), t_size = int(t.size());
    int duplicate_length = 0;

    // かぶっている数字を１個ずつずらす
    for (int i = 1; i <= min(s_size, t_size); i++)
    {
        bool is_ok = true;
        for (int j = 0; j < i; j++)
        {
            // cout << i << ":" << s_size - i + j << " " << j << endl;
            if (s.at(s_size - i + j) != t.at(j))
            {
                is_ok = false;
                break;
            }
        }
        if (is_ok)
            duplicate_length = i;
    }

    // cout << duplicate_length << endl;
    cout << s_size + t_size - duplicate_length << endl;
}