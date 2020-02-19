#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    int h, n;
    cin >> h >> n;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a.at(i) >> b.at(i);

    double max_magic_efficiency = -1.0;
    rep(i, n)
    {
        double magic_efficiency = (1.0 * a.at(i)) / b.at(i);
        max_magic_efficiency = max(max_magic_efficiency, magic_efficiency);
    }

    set<int> optimize_index;
    rep(i, n)
    {
        double magic_efficiency = (1.0 * a.at(i)) / b.at(i);
        if (max_magic_efficiency == magic_efficiency)
        {
            optimize_index.insert(i);
        }
    }

    int max_b = -INT_MAX, index_of_max_magic_efficiency = -1;
    for (auto itr = optimize_index.begin(); itr != optimize_index.end(); itr++)
    {
        max_b = max(max_b, b.at(*itr));
        if (max_b == b.at(*itr))
        {
            index_of_max_magic_efficiency = *itr;
        }
    }

    int a_of_max_magic_efficiency = a.at(index_of_max_magic_efficiency),
        b_of_max_magic_efficiency = b.at(index_of_max_magic_efficiency);

    int max_a = *max_element(a.begin(), a.end());
    int answer = (h / a_of_max_magic_efficiency) * b_of_max_magic_efficiency;
    h -= (answer / b_of_max_magic_efficiency) * a_of_max_magic_efficiency;

    if (h == 0)
    {
        cout << answer << endl;
        return 0;
    }

    cout << h << endl;
    cout << answer << endl;

    int min_rest_b = INT_MAX;
    rep(i, n)
    {
        if (h - a.at(i) <= 0)
        {
            min_rest_b = min(min_rest_b, b.at(i));
        }
    }

    cout << min_rest_b << endl;

    answer += min_rest_b;

    cout << answer << endl;
}