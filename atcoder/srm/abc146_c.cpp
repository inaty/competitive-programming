#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int d(int t)
{
    int res = 1;
    while (t >= 10)
    {
        res++;
        t /= 10;
    }
    return res;
}

int main()
{
    long long a, b, x;
    cin >> a >> b >> x;

    int L = 0, R = 1000000001;
    while (R - L > 1)
    {
        int mid = (L + R) / 2;
        auto X = a * mid + b * d(mid);
        if (X <= x)
            L = mid;
        else
            R = mid;
    }
    cout << L << endl;
}