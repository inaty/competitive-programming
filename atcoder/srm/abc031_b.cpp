#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int l, h, n;
    cin >> l >> h;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    rep(i, n)
    {
        if (a.at(i) > h)
        {
            cout << -1 << endl;
        }
        else if (a.at(i) >= l)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << l - a.at(i) << endl;
        }
    }
}