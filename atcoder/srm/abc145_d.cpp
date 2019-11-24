#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long MOD = 1000000007;

map<tuple<int, int>, int> memo;

int calc_state(int x, int y)
{

    if ((x < 0) | (y < 0))
    {
        return 0;
    }
    if ((x == 0) & (y == 0))
    {
        return 1;
    }
    return (calc_state(x - 2, y - 1) + calc_state(x - 1, y - 2)) % MOD;
}

int main()
{
    // int x, y;
    // cin >> x >> y;

    // cout << calc_state(x, y) << endl;
    memo[tuple(1, 2)] = 2;
}