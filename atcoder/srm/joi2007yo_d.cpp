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
    int m;
    cin >> m;
    vector<int> k(m);
    rep(i, m) cin >> k.at(i);

    vector<int> card(2 * n);
    rep(i, 2 * n) card.at(i) = i + 1;

    for (int i = 0; i < m; i++)
    {
        vector<int> next_card(2 * n);
        if (k.at(i) == 0)
        {
            // リシャッフル
            for (int j = 0; j < n; j++)
            {
                next_card.at(2 * j) = card.at(j);
            }
            for (int j = 0; j < n; j++)
            {
                next_card.at(2 * j + 1) = card.at(n + j);
            }
        }
        else
        {
            //整数kでカット
            for (int j = 0; j < k.at(i); j++)
            {
                next_card.at(2 * n - k.at(i) + j) = card.at(j);
            }
            for (int j = k.at(i); j < 2 * n; j++)
            {
                next_card.at(j - k.at(i)) = card.at(j);
            }
        }
        card = next_card;
    }

    for (int i = 0; i < 2 * n; i++)
    {
        cout << card.at(i) << endl;
    }
}