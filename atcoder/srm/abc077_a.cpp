#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string c1, c2, rc1, rc2;
    cin >> c1;
    cin >> c2;

    rc1 = {c2.at(2), c2.at(1), c2.at(0)};
    rc2 = {c1.at(2), c1.at(1), c1.at(0)};

    if ((c1 == rc1) && (c2 == rc2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}