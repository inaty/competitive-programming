#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

void solve(int n)
{
    int answer = -1;
    if ((int)(n.size()) == 1)
    {
        cout << answer << endl;
        return;
    }
    int start_num = 0;
    int digit = 1;
    rep(i, n)
    {
        start_num += digit;
        digit *= 10;
    }
    for (int i =)
}

int main()
{
    int t;
    cin >> t;
    rep(i, t)
    {
        int n;
        cin >> n;

        solve(n);
    }
}