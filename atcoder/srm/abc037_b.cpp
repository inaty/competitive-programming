#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n, 0);
    vector<int> l(q), r(q), t(q);
    rep(i, q)
    {
        cin >> l.at(i) >> r.at(i) >> t.at(i);
    }

    rep(i, q)
    {
        rep(j, n)
        {
            if (j + 1 >= l.at(i) and j + 1 <= r.at(i))
            {
                a.at(j) = t.at(i);
            }
        }
    }

    rep(i, n) cout << a.at(i) << endl;
}
