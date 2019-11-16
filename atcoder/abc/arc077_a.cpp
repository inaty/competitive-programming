#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b;
    rep(i, n) cin >> a.at(i);

    rep(i, a.size())
    {
        b.push_back(a.at(i));
        reverse(b.begin(), b.end());
    }

    for (int i = 0; i < b.size() - 1; i++)
    {
        cout << b.at(i) << ' ';
    }
    cout << b.at(b.size() - 1) << endl;
}