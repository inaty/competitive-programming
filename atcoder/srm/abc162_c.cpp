#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return (b);
    }
    else
    {
        return (gcd(b, a % b));
    }
}

int main()
{
    int k;
    cin >> k;

    ll answer = 0;
    for (int a = 1; a <= k; a++)
    {
        for (int b = 1; b <= k; b++)
        {
            for (int c = 1; c <= k; c++)
            {
                answer += gcd(a, gcd(b, c));
            }
        }
    }
    cout << answer << endl;
}