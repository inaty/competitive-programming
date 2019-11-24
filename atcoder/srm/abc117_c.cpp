#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> x(m);
    rep(i, m) cin >> x.at(i);
    sort(x.begin(), x.end());

    vector<int> diff(m - 1);
    rep(i, m - 1) diff.at(i) = x.at(i + 1) - x.at(i);

    sort(diff.begin(), diff.end());

    int answer = 0;
    rep(i, m - n)
    {
        answer += diff.at(i);
    }

    cout << answer << endl;
}