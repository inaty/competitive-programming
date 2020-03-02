#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    rep(i, n) cin >> p.at(i);

    vector<double> one_prob(n);
    rep(i, n)
    {
        one_prob.at(i) = 1.0 * (1 + p.at(i)) * p.at(i) / 2.0 / p.at(i);
        // cout << one_prob.at(i) << " ";
    }
    // cout << endl;

    vector<double> accum_prob(n + 1);
    double one_accum_prob = 0.0;
    accum_prob.at(0) = 0.0;
    // cout << accum_prob.at(0) << " ";
    for (int i = 1; i <= n; i++)
    {
        one_accum_prob += one_prob.at(i - 1);
        accum_prob.at(i) = one_accum_prob;
        // cout << accum_prob.at(i) << " ";
    }
    // cout << endl;

    // cout << "hoge" << endl;

    double answer = 0.0;
    for (int l = 0; l < n - k + 1; l++)
    {
        int r = l + k - 1;
        // cout << l << " " << r+1 << endl;
        // cout << accum_prob.at(l) << " " << accum_prob.at(r+1) << endl;
        answer = max(answer, accum_prob.at(r + 1) - accum_prob.at(l));
    }
    // cout << "hogehoge" << endl;
    cout << fixed << setprecision(12) << answer << endl;
}
