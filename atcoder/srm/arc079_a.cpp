#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i, m) cin >> a.at(i) >> b.at(i);

    vector<set<int>> to1(n + 1);
    rep(i, m)
    {
        to1.at(a.at(i)).insert(b.at(i));
        to1.at(b.at(i)).insert(a.at(i));
    }

    string answer = "IMPOSSIBLE";
    for (int x : to1.at(1))
    {
        if (to1.at(x).count(n) != 0)
        {
            answer = "POSSIBLE";
            break;
        }
    }

    cout << answer << endl;
}