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

int ctoi(char c)
{
    switch (c)
    {
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    default:
        return 0;
    }
}

int main()
{
    string n;
    cin >> n;

    vector<vector<ll>> dp(ll(n.size()), vector<ll>(2, -1));

    dp.at(0).at(0) = 0;
    for (ll d = 0; d < ll(n.size()); d++)
    {
        dp.at
    }

    int answer = 0;

    for (int i = 1; i < int(n.size()); i++)
    {
        answer += 9;
    }

    for (int i = 0; i < int(n.size()); i++)
    {
        int tmp_answer = 0;
        for (int j = 0; j < int(n.size()); j++)
        {
            if (i == j)
            {
                tmp_answer += ctoi(n.at(j)) - 1;
            }
            else
            {
                tmp_answer += 9;
            }
            cout << i << " " << j << " " << tmp_answer << endl;
        }
        cout << i << " " << tmp_answer << endl;
        answer = max(answer, tmp_answer);
    }

    cout << answer << endl;
}
