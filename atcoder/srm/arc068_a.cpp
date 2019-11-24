#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long x;
    cin >> x;

    if (x % 11 == 0)
    {
        cout << (x / 11 * 2) << endl;
    }
    else if (x % 11 <= 6)
    {
        cout << (x / 11 * 2) + 1 << endl;
    }
    else
    {
        cout << (x / 11 * 2) + 2 << endl;
    }
}