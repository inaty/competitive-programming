#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long a, b, k, l;
    cin >> a >> b >> k >> l;

    long long answer = LONG_LONG_MAX;
    if (a <= b / l)
    {
        answer = (long long)(k * a);
    }
    else
    {
        long long set_cnt = (long long)(k / l);
        long long remain_cnt = max(0ll, k - set_cnt * l);
        answer = min(set_cnt * b + remain_cnt * a, (set_cnt + 1) * b);
    }

    cout << answer << endl;
}