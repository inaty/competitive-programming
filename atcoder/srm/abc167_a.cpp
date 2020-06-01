#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

void solve(string s, string t)
{
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s.at(i) != t.at(i))
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    return;
}

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    solve(s, t);
}