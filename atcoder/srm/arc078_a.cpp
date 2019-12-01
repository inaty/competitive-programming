#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    rep(i, n) cin >> a.at(i);

    long long answer = INT_MAX;
    long long x = 0, y = 0;
    rep(i, n) y += a.at(i);
    for (int i = 0; i < n - 1; i++)
    {
        x += a.at(i);
        y -= a.at(i);

        answer = min(answer, abs(x - y));
    }

    cout << answer << endl;
}