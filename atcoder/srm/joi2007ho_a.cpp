#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1, 0);
    rep(i, n) cin >> a.at(i + 1);

    vector<int> accum_s(n + 1, 0);
    int sum = 0;
    for (int i = 0; i < n + 1; i++)
    {
        sum += a.at(i);
        accum_s.at(i) = sum;
    }

    int answer = -INT_MAX;
    for (int i = 1; i <= n - k + 1;i++){
        int s = accum_s.at(i + k - 1) - accum_s.at(i - 1);
        answer = max(answer, s);
    }

    cout << answer << endl;
}