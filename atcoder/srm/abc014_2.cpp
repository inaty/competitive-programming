#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    vector<int> X(n, 0);
    int ii = 0;
    while (x > 0)
    {
        X.at(ii) = x % 2;
        x /= 2;
        ii++;
    }

    int answer = 0;
    rep(i, n)
    {
        answer += a.at(i) * X.at(i);
    }

    cout << answer << endl;
}