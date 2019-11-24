#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;

    int num = 1;
    rep(i, k)
    {
        num = (int)s.at(i) - '0';
        if (num != 1)
        {
            break;
        }
    }

    cout << num << endl;
}