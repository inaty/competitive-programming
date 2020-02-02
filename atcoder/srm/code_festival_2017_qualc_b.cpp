#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    int all_times = 1;
    int odd_times = 1;

    rep(i, n)
    {
        if (a.at(i) == 1)
        {
            all_times *= 3;
        }
        else if (a.at(i) % 2 == 1)
        {
            all_times *= 3;
        }
        else if (a.at(i) % 2 == 0)
        {
            all_times *= 3;
            odd_times *= 2;
        }
    }
    int answer = all_times - odd_times;

    cout << answer << endl;
}