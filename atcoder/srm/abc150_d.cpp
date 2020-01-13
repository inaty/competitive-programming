#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

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

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int lcm_v(vector<int> v)
{
    int res = lcm(v.at(0), v.at(1));
    for (int i = 2; i < int(v.size()); i++)
    {
        res = lcm(res, v.at(i));
    }
    return res;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    vector<int> half_a(n);
    rep(i, n) half_a.at(i) = a.at(i) / 2;

    int lcm = lcm_v(half_a);
    int answer = 0;

    for (int i = 1; i <= m;i++){
        if (i%lcm==0 && i%2!=0)
            answer++;
    }

    cout << answer << endl;
}