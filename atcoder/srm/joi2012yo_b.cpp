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
    vector<int> point(n, 0);
    rep(i, n * (n - 1) / 2)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c > d)
        {
            point.at(a - 1) += 3;
        }
        else if (c < d)
        {
            point.at(b - 1) += 3;
        }
        else if (c == d)
        {
            point.at(a - 1) += 1;
            point.at(b - 1) += 1;
        }
    }

    // rep(i, n) cout << point.at(i) << endl;

    vector<int> sorted_point = point;
    sort(sorted_point.begin(), sorted_point.end(), greater<int>());

    vector<int> team_rank(n,-1);
    rep(i,n){
        rep(j,n){
            if (point.at(i) == sorted_point.at(j))
            {
                team_rank.at(i) = j + 1;
                break;
            }
        }
    }

    rep(i, n) cout << team_rank.at(i) << endl;
}