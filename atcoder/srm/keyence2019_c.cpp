#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (long long i = 0; i < (long long)(n); i++)

int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n), b(n);
    rep(i, n) cin >> a.at(i);
    rep(i, n) cin >> b.at(i);

    long long sum_a = 0, sum_b = 0;
    for (long long i = 0; i < n; i++)
    {
        sum_a += a.at(i);
        sum_b += b.at(i);
    }

    if (sum_a <= sum_b)
    {
        cout << -1 << endl;
        return 0;
    }

    bool is_all_ok = true;
    for (long long i = 0; i < n; i++)
    {
        if (a.at(i) < b.at(i))
        {
            is_all_ok = false;
            break;
        }
    }
    if (is_all_ok)
    {
        cout << 0 << endl;
        return 0;
    }

    long long s = 0;
    long long answer = 0;
    for (long long i = 0; i < n; i++)
    {
        if (a.at(i) < b.at(i))
        {
            s += b.at(i) - a.at(i);
            answer++;
        }
    }

    vector<long long> ab(n);
    rep(i, n) ab.at(i) = a.at(i) - b.at(i);

    sort(ab.begin(), ab.end(), greater<long long>());
    for (long long i = 0; i < n; i++)
    {
        s -= ab.at(i);
        answer++;
        if (s <= 0)
        {
            break;
        }
    }

    cout << answer << endl;
    return 0;
}