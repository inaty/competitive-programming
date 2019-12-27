#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    double l, x, y, s, d;
    cin >> l >> x >> y >> s >> d;

    double R, L;
    if (s <= d)
    {
        R = d - s;
        L = l - R;
    }
    else
    {
        L = s - d;
        R = l - L;
    }

    if (x >= y)
    {
        double answer = R / (x + y);
        cout << std::fixed << setprecision(10) << answer << endl;
    }
    else
    {
        double answer = min(R / (x + y), L / (y - x));
        cout << std::fixed << setprecision(10) << answer << endl;
    }
}