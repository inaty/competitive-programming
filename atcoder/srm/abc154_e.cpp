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

int ctoi(const char c)
{
    if ('0' <= c && c <= '9')
        return (c - '0');
    return -1;
}

int main()
{
    string n;
    cin >> n;
    int k;
    cin >> k;

    if (k == 1)
    {
        int answer = 0;
        answer += ctoi(n.at(0));
        answer += (int(n.length()) - 1) * 9;
        cout << answer << endl;
        return 0;
    }
    if (k == 2)
    {
        int answer = 0;
        if (int(n.length()) < k)
        {
            cout << answer << endl;
            return 0;
        }

        int tmp = 1;
        for (int i = 1; i < int(n.size()); i++)
        {
            tmp *= 
        }

        return 0;
    }
    if (k == 3)
    {
        return 0;
    }
}