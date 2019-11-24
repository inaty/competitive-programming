#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> x(m), y(m);
    rep(i, m) cin >> x.at(i) >> y.at(i);

    vector<int> ball_cnt(n, 1);
    vector<bool> red_potential(n, false);
    red_potential.at(0) = true;

    for (int i = 0; i < m; i++)
    {
        if (ball_cnt.at(x.at(i) - 1) != 0)
        {
            if (red_potential.at(x.at(i) - 1) == true)
            {
                ball_cnt.at(x.at(i) - 1) -= 1;
                ball_cnt.at(y.at(i) - 1) += 1;
                red_potential.at(y.at(i) - 1) = true;
            }
            else
            {
                ball_cnt.at(x.at(i) - 1) -= 1;
                ball_cnt.at(y.at(i) - 1) += 1;
            }
        }
        if (ball_cnt.at(x.at(i) - 1) == 0)
        {
            red_potential.at(x.at(i) - 1) = false;
        }
    }

    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        if (red_potential.at(i) == true)
        {
            answer++;
        }
    }

    cout << answer << endl;
}