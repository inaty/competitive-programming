#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> s;
    int cnt_over_3200 = 0;
    rep(i, n)
    {
        cin >> a.at(i);
        if (a.at(i) >= 3200)
        {
            cnt_over_3200++;
        }
        else
        {
            s.insert(a.at(i) / 400);
        }
    }

    int ans_min = max(1, int(s.size()));
    int ans_max = int(s.size()) + cnt_over_3200;

    if ((ans_min == 0) & (cnt_over_3200 >= 1))
    {
        ans_min = 1;
        ans_max = min(8, cnt_over_3200);
    }

    cout << ans_min << " " << ans_max << endl;
}