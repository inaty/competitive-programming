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
    int a, b, h, m;
    cin >> a >> b >> h >> m;

    double pi = 3.141592653589793238;
    double theta = (m / 60.0 - (60 * h + m) / 720.0) * 2.0 * pi;

    double ans2 = a * a + b * b - 2 * a * b * cos(theta);
    double ans = sqrt(ans2);
    cout << fixed << setprecision(20);
    cout << ans << endl;
}