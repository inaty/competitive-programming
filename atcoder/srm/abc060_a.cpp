#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    if (a.at(int(a.size()) - 1) == b.at(0) && b.at(int(b.size()) - 1) == c.at(0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}