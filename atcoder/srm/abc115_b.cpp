#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p.at(i);

    sort(p.begin(), p.end(), greater<int>());

    int answer = p.at(0) / 2;
    for (int i = 1; i < (int)n; i++)
        answer += p.at(i);

    cout << answer << endl;
}