#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    int s, t;
    cin >> s >> t;

    if (s + t >= k)
    {
        cout << max(0, a * s + b * t - (s + t) * c) << endl;
    }
    else
    {
        cout << a * s + b * t << endl;
    }
}