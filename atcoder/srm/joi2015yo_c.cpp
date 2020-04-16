#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> area(h);
    rep(i, h) cin >> area.at(i);

    vector<vector<int>> answer(h, vector<int>(w, -1));
    rep(i, h)
    {
        int times = -1;
        rep(j, w)
        {
            if (area.at(i).at(j) == 'c')
            {
                times = 0;
            }
            else if (times != -1)
            {
                times++;
            }
            answer.at(i).at(j) = times;
        }
    }

    rep(i, h)
    {
        rep(j, w)
        {
            cout << answer.at(i).at(j);
            if (j <= w - 2)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}