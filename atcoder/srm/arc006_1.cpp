#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    vector<int> e(10, 0), l(10, 0);
    int b;
    rep(i, 6)
    {
        int en;
        cin >> en;
        e.at(en) = 1;
    }
    cin >> b;
    rep(i, 6)
    {
        int ln;
        cin >> ln;
        l.at(ln) = 1;
    }

    int same_cnt = 0;
    bool is_b_matched = false;
    for (int i = 0; i < 10; i++)
    {
        if ((e.at(i) == 1) & (l.at(i) == 1))
        {
            same_cnt++;
        }
        else if ((l.at(i) == 1) & (i == b))
        {
            is_b_matched = true;
        }
    }

    int answer = 0;
    if (same_cnt == 6)
    {
        answer = 1;
    }
    else if (same_cnt == 5)
    {
        if (is_b_matched)
        {
            answer = 2;
        }
        else
        {
            answer = 3;
        }
    }
    else if (same_cnt == 4)
    {
        answer = 4;
    }
    else if (same_cnt == 3)
    {
        answer = 5;
    }

    cout << answer << endl;
}