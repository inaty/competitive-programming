#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int w, h, n;
    cin >> w >> h >> n;
    vector<int> x(n), y(n), a(n);
    rep(i, n) cin >> x.at(i) >> y.at(i) >> a.at(i);

    int x_min = 0, x_max = w, y_min = 0, y_max = h;

    for (int i = 0; i < n; i++)
    {
        if (a.at(i) == 1)
        {
            x_min = max(x_min, x.at(i));
        }
        if (a.at(i) == 2)
        {
            x_max = min(x_max, x.at(i));
        }
        if (a.at(i) == 3)
        {
            y_min = max(y_min, y.at(i));
        }
        if (a.at(i) == 4)
        {
            y_max = min(y_max, y.at(i));
        }
    }

    int answer = max(0, x_max - x_min) * max(0, y_max - y_min);
    cout << answer << endl;
}