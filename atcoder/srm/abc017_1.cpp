#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    vector<int> s(3), e(3);
    rep(i, 3) cin >> s.at(i) >> e.at(i);

    int answer = 0;
    rep(i, 3) answer += s.at(i) * e.at(i) / 10;

    cout << answer << endl;
}