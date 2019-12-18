#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    vector<int> a(3);
    rep(i, 3) cin >> a.at(i);

    if (a.at(0) + a.at(1) + a.at(2) >= 22)
    {
        cout << "bust" << endl;
    }
    else
    {
        cout << "win" << endl;
    }
}