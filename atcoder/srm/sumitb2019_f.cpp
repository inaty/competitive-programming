#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long t1, t2, a1, a2, b1, b2;
    cin >> t1 >> t2;
    cin >> a1 >> a2;
    cin >> b1 >> b2;

    long long p = (a1 - b1) * t1, q = (a2 - b2) * t2;

    if (p > 0)
    {
        p *= -1;
        q *= -1;
    }

    if (p + q < 0)
    {
        cout << 0 << endl;
        return 0;
    }

    if (p + q == 0)
    {
        cout << "infinity" << endl;
        return 0;
    }

    if (p + q > 0)
    {
        long long s = (-p) / (p + q), t = (-p) % (p + q);
        if (t != 0)
        {
            cout << s * 2 + 1 << endl;
        }
        else
        {
            cout << s * 2 << endl;
        }
        return 0;
    }
    return 0;
}