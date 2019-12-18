#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    vector<int> c(n + 1, 0);
    c.at(0) = 3;

    long long answer = 1LL;
    rep(i, n)
    {
        if (c.at(a.at(i)) == 0)
        {
            answer = 0LL;
        }
        else
        {
            answer = (answer * (long long)c.at(a.at(i))) % 1000000007ll;
            c.at(a.at(i)) -= 1;
            c.at(a.at(i) + 1) += 1;
        }
    }
    cout << answer << endl;
}