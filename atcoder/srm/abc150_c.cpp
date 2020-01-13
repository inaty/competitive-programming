#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    rep(i, n) cin >> p.at(i);
    rep(i, n) cin >> q.at(i);

    string s_p, s_q;
    rep(i, n)
    {
        s_p += to_string(p.at(i));
        s_q += to_string(q.at(i));
    }

    int nq = 1;
    rep(i, n) nq = nq * (i + 1);

    vector<string> all(nq);
    vector<int> v(n);
    rep(i, n) v.at(i) = i + 1;

    rep(i, nq)
    {
        string s;
        rep(j, n) s += to_string(v.at(j));
        all.at(i) = s;
        next_permutation(v.begin(), v.end());
    }

    sort(all.begin(), all.end());

    int a = 0, b = 0;
    rep(i, nq)
    {
        if (s_p == all.at(i))
        {
            a = i + 1;
        }
        if (s_q == all.at(i))
        {
            b = i + 1;
        }
    }

    cout << abs(a - b) << endl;
}