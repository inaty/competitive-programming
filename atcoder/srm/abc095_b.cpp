#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> m(n);
    rep(i, n) cin >> m.at(i);

    int sum_m = accumulate(m.begin(), m.end(), 0);
    int min_m = *min_element(m.begin(), m.end());
    int answer = n + (int)floor((x - sum_m) / min_m);
    cout << answer << endl;
}