#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> a(m);
    rep(i, m) cin >> a.at(i);

    int to_zero_cost = 0, to_n_cost = 0;
    rep(i, m)
    {
        if (a.at(i) < x)
        {
            to_zero_cost++;
        }
        else
        {
            to_n_cost++;
        }
    }

    cout << min(to_zero_cost, to_n_cost) << endl;
}