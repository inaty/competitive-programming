#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> l(q), r(q);
    rep(i, q) cin >> l.at(i) >> r.at(i);

    int cnt = 0;
    vector<int> c(n, 0);
    for (int i = 1; i < n; i++)
    {
        if ((s.at(i - 1) == 'A') && (s.at(i) == 'C'))
        {
            cnt += 1;
        }
        c.at(i) = cnt;
    }

    rep(i, q)
    {
        cout << c.at(r.at(i) - 1) - c.at(l.at(i) - 1) << endl;
    }
}