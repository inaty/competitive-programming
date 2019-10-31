#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), f(n), af(n);
    rep(i, n) cin >> a.at(i);
    rep(i, n) cin >> f.at(i);

    sort(a.begin(), a.end(), greater<int>());
    sort(f.begin(), f.end());

    int team_score = 0;
    rep(i, n)
    {
        af.at(i) = a.at(i) * f.at(i);
    }
}