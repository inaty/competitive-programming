#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

map<long long, int> prime_factor(long long n)
{
    map<long long, int> ret;
    for (long long i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            ret[i]++;
            n /= i;
        }
    }
    if (n != 1)
        ret[n] = 1;
    return ret;
}

int main()
{
    ll n, p;
    cin >> n >> p;

    map<ll, int> pf = prime_factor(p);

    ll answer = 1l;
    for (auto i = pf.begin(); i != pf.end(); i++)
    {
        if ((i->second) >= n)
        {
            for (ll j = 0; j < i->second / n; j++)
            {
                answer *= (i->first);
            }
        }
    }

    cout << answer << endl;
}