#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    int x1, y1, r;
    cin >> x1 >> y1 >> r;
    int x2, y2, x3, y3;
    cin >> x2 >> y2 >> x3 >> y3;

    if (x2 + r <= x1 && x1 + r <= x3 && y2 + r <= y1 && y1 + r <= y3)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    if (pow(x1 - x2, 2) + pow(y1 - y2, 2) <= pow(r, 2) && pow(x3 - x1, 2) + pow(y1 - y2, 2) <= pow(r, 2) && pow(x1 - x2, 2) + pow(y3 - y1, 2) <= pow(r, 2) && pow(x3 - x1, 2) + pow(y3 - y1, 2) <= pow(r, 2))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}