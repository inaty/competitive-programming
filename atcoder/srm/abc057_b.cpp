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

int distance(int a, int b, int c, int d)
{
    return abs(a - c) + abs(b - d);
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n), c(m), d(m);
    rep(i, n) cin >> a.at(i) >> b.at(i);
    rep(i, m) cin >> c.at(i) >> d.at(i);
    // vector<vector<int>> person(n, vector<int>(3)), checkpoint(m,vector<int>(4));
    // rep(i,n){
    // cin >> person.at(i).at(0) >> person.at(i).at(1);
    // person.at(i).at(2) = abs(person.at(i).at(0)) +
    // }

    for (int i = 0; i < n; i++)
    {
        int check_point = 0;
        int min_distance = INT_MAX;
        for (int j = 0; j < m; j++)
        {
            if (min_distance > distance(a.at(i), b.at(i), c.at(j), d.at(j)))
            {
                min_distance = distance(a.at(i), b.at(i), c.at(j), d.at(j));
                check_point = j + 1;
            }
        }
        cout << check_point << endl;
    }
}