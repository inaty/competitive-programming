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
    int A, B, M;
    cin >> A >> B >> M;
    vector<int> a(A), b(B);
    rep(i, A) cin >> a.at(i);
    rep(i, B) cin >> b.at(i);
    vector<int> x(M), y(M), c(M);
    rep(i, M) cin >> x.at(i) >> y.at(i) >> c.at(i);

    // 割引券なしで買ったときに一番安い金額
    int min_a = INT_MAX, min_b = INT_MAX;
    rep(i, A)
    {
        min_a = min(min_a, a.at(i));
    }
    rep(i, B)
    {
        min_b = min(min_b, b.at(i));
    }
    int answer1 = min_a + min_b;

    // 割引券ありで買ったときに一番安い金額
    int answer2 = INT_MAX;
    rep(i, M)
    {
        answer2 = min(answer2, a.at(x.at(i) - 1) + b.at(y.at(i) - 1) - c.at(i));
    }

    cout << min(answer1, answer2) << endl;
}