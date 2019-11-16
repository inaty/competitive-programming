#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(max(10 * a + b + c, a + 10 * b + c), a + b + 10 * c) << endl;
}