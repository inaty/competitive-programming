#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int x;
    cin >> x;

    if (((int)(x / 100)) == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    int y = (int)(x / 100), z = (int)(x % 100);

    if ((z <= 5 * y) & (y <= 1000000))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}