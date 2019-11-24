#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    rep(i, n) cin >> h.at(i);

    sort(h.begin(), h.end());

    int answer = INT_MAX;
    for (int index_min = 0; index_min <= n - k; index_min++)
    {
        int index_max = index_min + k - 1;
        answer = min(answer, h.at(index_max) - h.at(index_min));
    }

    cout << answer << endl;
}