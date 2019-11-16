#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(c.begin(), c.end());

    auto n = a.back();
    a.pop_back();
    while (true)
    {
        // cout << n << endl;
        // cout << a << endl;
        // cout << b << endl;
        // cout << c << endl;
        // cout << "---------" << endl;
        if (n == 'a')
        {
            if (a.size() == 0)
            {
                break;
            }
            n = a.back();
            a.pop_back();
        }
        else if (n == 'b')
        {
            if (b.size() == 0)
            {
                break;
            }
            n = b.back();
            b.pop_back();
        }
        else if (n == 'c')
        {
            if (c.size() == 0)
            {
                break;
            }
            n = c.back();
            c.pop_back();
        }
    }

    if (n == 'a')
    {
        cout << 'A' << endl;
    }
    else if (n == 'b')
    {
        cout << 'B' << endl;
    }
    else if (n == 'c')
    {
        cout << 'C' << endl;
    }
}