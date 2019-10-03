#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, l;
    cin >> n >> l;
    vector<string> s(n);
    string all_s = "";
    rep(i, n)
    {
        cin >> s.at(i);
    }

    sort(s.begin(), s.end());

    rep(i, n)
    {
        all_s += s.at(i);
    }

    cout << all_s << endl;
}