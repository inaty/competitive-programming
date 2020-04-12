#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n));
        vector<set<int>> rows(n), columns(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m.at(i).at(j);
                rows.at(i).insert(m.at(i).at(j));
                columns.at(j).insert(m.at(i).at(j));
            }
        }

        int k = 0, r = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            k += m.at(i).at(i);
        }

        for (int row = 0; row < n; row++)
        {
            if (rows.at(row).size() != n)
            {
                r++;
            }
        }

        for (int column = 0; column < n; column++)
        {
            if (columns.at(column).size() != n)
            {
                c++;
            }
        }

        cout << "Case #" << (i + 1) << ": " << k << " " << r << " " << c << endl;
    }
}