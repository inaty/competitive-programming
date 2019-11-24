#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

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

int multi_gcd(vector<int> n_list)
{
    int res = gcd(n_list.at(0), n_list.at(1));
    for (int i = 2; i < n_list.size(); i++)
    {
        res = gcd(res, n_list.at(i));
    }
    return res;
}

int main()
{
    int N, X;
    cin >> N >> X;
    vector<int> x(N), abs_x(N);
    rep(i, N)
    {
        cin >> x.at(i);
        x.at(i) -= X;
    }

    if (N == 1)
    {
        cout << abs(x.at(0)) << endl;
        return 0;
    }

    sort(x.begin(), x.end());

    rep(i, N) { abs_x.at(i) = abs(x.at(i)); }
    int n_gcd = multi_gcd(abs_x);
    cout << n_gcd << endl;
    return 0;
}