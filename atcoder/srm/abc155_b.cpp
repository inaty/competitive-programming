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

    string answer = "APPROVED";
    rep(i, n)
    {
        if (a.at(i) % 2 == 0)
        {
            if (a.at(i) % 3 == 0 || a.at(i) % 5 == 0)
            {
                continue;
            }
            else
            {
                answer = "DENIED";
                cout << answer << endl;
                return 0;
            }
        }
    }
    cout << answer << endl;
    return 0;
}