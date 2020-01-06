#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    int sum_s = 0;
    vector<int> s(n);
    rep(i, n)
    {
        cin >> s.at(i);
        sum_s += s.at(i);
    }

    sort(s.begin(), s.end());

    if (sum_s % 10 != 0)
    {
        cout << sum_s << endl;
        return 0;
    }
    else
    {
        rep(i, n)
        {
            if ((sum_s - s.at(i)) % 10 != 0)
            {
                cout << sum_s - s.at(i) << endl;
                return 0;
            }
        }
    }

    cout << 0 << endl;
    return 0;
}