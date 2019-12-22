#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    vector<int> b;
    // rep(i, n)
    // {
    //     b.push_back(a.at(i));
    //     reverse(b.begin(), b.end());
    // }

    if (n % 2 == 1)
    {
        for (int i = 0; i < int(n / 2) + 1; i++)
        {
            b.push_back(a.at(n - i * 2 - 1));
        }
        for (int i = int(n / 2) + 1; i < n; i++)
        {
            b.push_back(a.at(2 * (i - int(n / 2) - 1) + 1));
        }
    }
    if (n % 2 == 0)
    {
        for (int i = 0; i < int(n / 2); i++)
        {
            b.push_back(a.at(n - 1 - 2 * i));
        }
        for (int i = int(n / 2); i < n; i++)
        {
            b.push_back(a.at(2 * (i - int(n / 2))));
        }
    }

    rep(i, n)
    {
        cout << b.at(i);
        if (i != int(b.size() - 1))
        {
            cout << " ";
        }
    }
}