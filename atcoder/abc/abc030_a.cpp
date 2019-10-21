#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a / (float)b) > (c / (float)d))
    {
        cout << "AOKI" << endl;
    }
    else if ((a / (float)b) < (c / (float)d))
    {
        cout << "TAKAHASHI" << endl;
    }
    else
    {
        cout << "DRAW" << endl;
    }
}