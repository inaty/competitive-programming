#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i, n) cin >> d.at(i);
    int m;
    cin >> m;
    vector<int> t(m);
    rep(i, m) cin >> t.at(i);

    map<int, int> problems;
    rep(i, n) problems[d.at(i)]++;

    string answer = "YES";
    rep(i, m)
    {
        if (problems[t.at(i)] <= 0)
        {
            answer = "NO";
            break;
        }
        else
        {
            problems[t.at(i)]--;
        }
    }

    cout << answer << endl;
}