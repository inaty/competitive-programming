#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> cl(n), tl(n);
    rep(i, n)
    {
        cin >> cl.at(i) >> tl.at(i);
    }

    if (*min_element(tl.begin(), tl.end()) > t)
    {
        cout << "TLE" << endl;
    }
    else
    {
        int min = INT_MAX;
        rep(i, n)
        {
            if (tl.at(i) <= t and min > cl.at(i))
            {
                min = cl.at(i);
            }
        }
        cout << min << endl;
    }
}