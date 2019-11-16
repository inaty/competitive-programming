#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    double l, x, y, s, d;
    cin >> l >> x >> y >> s >> d;

    cout << fixed;
    if (d == s)
    {
        cout << 0 << endl;
    }
    else if (d < s)
    {
        if (y - x > 0)
        {
            cout << setprecision(10) << min((s - d) / (y - x), (l - s + d) / (x + y)) << endl;
        }
        else
        {
            cout << setprecision(10) << (l - s + d) / (x + y) << endl;
        }
    }
    else
    {
        if (y - x > 0)
        {
            cout << setprecision(10) << min((d - s) / (y - x), (l - d + s) / (x + y)) << endl;
        }
        else
        {
            cout << setprecision(10) << (l - d + s) / (x + y) << endl;
        }
    }
}