#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> numbers(n, vector<int>(3));
    rep(i, n)
    {
        rep(j, 3)
        {
            cin >> numbers.at(i).at(j);
        }
    }

    vector<map<int, int>> mp_numbers(3);
    rep(i, n)
    {
        rep(j, 3)
        {
            mp_numbers.at(j)[numbers.at(i).at(j)]++;
        }
    }

    vector<int> points(n, 0);
    rep(i, n)
    {
        rep(j, 3)
        {
            if (mp_numbers.at(j)[numbers.at(i).at(j)] == 1)
            {
                points.at(i) += numbers.at(i).at(j);
            }
        }
    }

    rep(i, n)
    {
        cout << points.at(i) << endl;
    }
}