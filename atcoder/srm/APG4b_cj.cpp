#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int sum = 0, avg = 0;
    rep(i, n)
    {
        cin >> a.at(i);
        sum += a.at(i);
    }
    avg = sum / n;

    rep(i, n)
    {
        cout << abs(a.at(i) - avg) << endl;
    }
}