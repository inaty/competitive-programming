#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> l(n), r(n);
    rep(i, n) cin >> l.at(i) >> r.at(i);

    int answer = 0;
    rep(i, n) answer += r.at(i) - l.at(i) + 1;

    cout << answer << endl;
}