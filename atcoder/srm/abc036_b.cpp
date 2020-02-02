#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s.at(i);

    vector<string> t(int(s.at(0).size()));

    rep(i, int(t.size()))
    {
        string tmp = "";
        rep(j, int(s.at(0).size()))
        {
            tmp = tmp + s.at(n - j - 1).at(i);
        }
        t.at(i) = tmp;
    }

    rep(i, int(t.size()))
    {
        rep(j, int(t.at(i).size()))
        {
            cout << t.at(i).at(j);
        }
        cout << endl;
    }
}