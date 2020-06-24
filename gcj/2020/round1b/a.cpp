#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int solve(int test_no, int x, int y, string m)
{
    int peppurr_posi_x = x;
    int peppurr_posi_y = y;
    int your_posi_x = 0;
    int your_posi_y = 0;

    int m_length = (int)m.size();

    int time = 0;

    if (abs(peppurr_posi_x) + abs(peppurr_posi_y) <= time)
    {
        cout << "Case #" << test_no << ": " << time << endl;
        return 0;
    }

    rep(i, m_length)
    {
        // peppurrの移動
        if (m.at(i) == 'N')
        {
            peppurr_posi_y++;
        }
        else if (m.at(i) == 'S')
        {
            peppurr_posi_y--;
        }
        else if (m.at(i) == 'E')
        {
            peppurr_posi_x++;
        }
        else if (m.at(i) == 'W')
        {
            peppurr_posi_x--;
        }

        time++;

        if (abs(peppurr_posi_x) + abs(peppurr_posi_y) <= time)
        {
            cout << "Case #" << test_no << ": " << time << endl;
            return 0;
        }
    }

    cout << "Case #" << test_no << ": IMPOSSIBLE" << endl;
    return 0;
}

int main()
{
    int T;
    cin >> T;
    vector<int> X(T), Y(T);
    vector<string> M(T);
    rep(i, T) cin >> X.at(i) >> Y.at(i) >> M.at(i);

    rep(i, T)
    {
        solve(i + 1, X.at(i), Y.at(i), M.at(i));
    }
    return 0;
}