#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string o, e;
    cin >> o;
    cin >> e;
    rep(i, o.size())
    {
        if (i != e.size())
        {
            cout << o.at(i) << e.at(i);
        }
        else
        {
            cout << o.at(i) << endl;
        }
    }
}