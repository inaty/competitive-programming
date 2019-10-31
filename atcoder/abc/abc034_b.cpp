#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << n + 1 << endl;
    }
    else
    {
        cout << n - 1 << endl;
    }
}