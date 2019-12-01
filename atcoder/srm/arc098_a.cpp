#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> cnt_L(n, 0), cnt_R(n, 0), sum_LR(n, 0);
    for (int i = 1; i < n; i++)
    {
        if (s.at(i - 1) == 'W')
        {
            cnt_L.at(i) = cnt_L.at(i - 1) + 1;
        }
        else
        {
            cnt_L.at(i) = cnt_L.at(i - 1);
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        if (s.at(i + 1) == 'E')
        {
            cnt_R.at(i) = cnt_R.at(i + 1) + 1;
        }
        else
        {
            cnt_R.at(i) = cnt_R.at(i + 1);
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum_LR.at(i) = cnt_L.at(i) + cnt_R.at(i);
    }

    int answer = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        answer = min(answer, sum_LR.at(i));
    }

    cout << answer << endl;
}