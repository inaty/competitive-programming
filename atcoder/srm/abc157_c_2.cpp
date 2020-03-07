#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> s(m), c(m);
    rep(i, m) cin >> s.at(i) >> c.at(i);

    vector<int> x(n, -1);

    int answer = -1;
    rep(i, m)
    {
        if(s.at(i)==1 && c.at(i)==0){
            cout << answer << endl;
            return 0;
        }
        if (x.at(s.at(i)-1) == -1)
        {
            x.at(s.at(i)-1) = c.at(i);
        }
        else if (x.at(s.at(i)-1) != c.at(i))
        {
            cout << answer << endl;
            return 0;
        }
    }

    rep(i, n)
    {
        if (i == 0 && x.at(i) == -1)
        {
            x.at(i) = 1;
        }
        else if (x.at(i) == -1)
        {
            x.at(i) = 0;
        }
        cout << x.at(i);
    }
    cout << endl;

    return 0;
}