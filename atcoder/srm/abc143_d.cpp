#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> L(n);
    rep(i, n) cin >> L.at(i);

    sort(L.begin(), L.end());

    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int k = lower_bound(L.begin(), L.end(), L.at(i) + L.at(j)) - L.begin();
            answer += max(0, k - (j + 1));
        }
    }
    cout << answer << endl;
}