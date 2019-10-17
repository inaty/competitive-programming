#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> p(n);
    rep(i, n) cin >> s.at(i) >> p.at(i);

    int sum = 0;
    rep(i, n) sum += p.at(i);

    string answer = "atcoder";
    rep(i, n)
    {
        if (p.at(i) > sum / 2)
        {
            answer = s.at(i);
        }
    }
    cout << answer << endl;
}