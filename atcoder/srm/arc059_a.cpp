#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    int answer = INT_MAX;
    for (int i = -100; i <= 100; i++)
    {
        int sum_point = 0;
        for (int j = 0; j < n; j++)
        {
            if (a.at(j) != i)
            {
                sum_point += (a.at(j) - i) * (a.at(j) - i);
            }
        }
        answer = min(answer, sum_point);
    }

    cout << answer << endl;
}