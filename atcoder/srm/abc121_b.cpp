#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> b(m);
    rep(i, m) cin >> b.at(i);
    vector<vector<int>> a(n, vector<int>(m));
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> a.at(i).at(j);
        }
    }

    int answer = 0;
    rep(i, n)
    {
        int if_sum = c;
        rep(j, m)
        {
            if_sum += a.at(i).at(j) * b.at(j);
        }
        if (if_sum > 0)
            answer++;
    }
    cout << answer << endl;
}
