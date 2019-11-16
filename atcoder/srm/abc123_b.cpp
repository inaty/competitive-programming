#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int a, b, c, d, e, n = 5;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    vector<int> time = {a, b, c, d, e};
    vector<int> next_time(n);
    rep(i, n)
    {
        // if (time[i] % 10 == 0)
        //     next_time[i] = time[i];
        // else
        //     next_time[i] = time[i] - time[i] % 10 + 10;

        next_time[i] = (time[i] + 9) / 10 * 10;
    }

    int best_time = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int sum_time = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum_time += time[j];
            }
            else
            {
                sum_time += next_time[j];
            }
        }
        best_time = min(best_time, sum_time);
    }

    cout << best_time << endl;
}
