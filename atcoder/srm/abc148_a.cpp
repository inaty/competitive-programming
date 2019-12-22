#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    if (a > b)
    {
        swap(a, b);
    }

    if ((a == 2) & (b == 3))
    {
        cout << 1 << endl;
    }
    else if ((a == 1) & (b == 3))
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }
}