#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int t;
    cin >> t;

    rep(i, t)
    {
        int n;
        cin >> n;
        string x;
        cin >> x;

        string a, b;
        rep(j, n)
        {
            if (x.at(j) == '2')
            {
                a.push_back('1');
                b.push_back('1');
            }
            else if (x.at(j) == '1')
            {
                a.push_back('1');
                b.push_back('0');
            }
            else if (x.at(j) == '0')
            {
                a.push_back('0');
                b.push_back('0');
            }
        }

        cout << a << endl;
        cout << b << endl;
    }
}