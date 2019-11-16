#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, t;
    cin >> n;
    t = n;
    int fx = 0;
    while (t > 0)
    {
        fx += t % 10;
        t /= 10;
    }
    if (n % fx == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}