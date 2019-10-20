#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int x, t;
    cin >> x >> t;
    cout << max(0, x - t) << endl;
}