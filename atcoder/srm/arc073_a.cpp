#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    ll N, T;
    cin >> N >> T;
    vector<ll> t(N);
    rep(i, N) cin >> t.at(i);

    ll answer = T;
    for (int i = 1; i < N; i++)
    {
        if (t.at(i) - t.at(i - 1) <= T)
        {
            answer += t.at(i) - t.at(i - 1);
        }
        else
        {
            answer += T;
        }
    }

    cout << answer << endl;
}