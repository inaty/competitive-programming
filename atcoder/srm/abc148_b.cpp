#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    string answer;
    rep(i, n)
    {
        answer += s.at(i);
        answer += t.at(i);
    }

    cout << answer << endl;
}