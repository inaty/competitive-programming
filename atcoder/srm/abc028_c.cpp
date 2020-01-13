#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    vector<int> a(5);
    rep(i, 5) cin >> a.at(i);

    int sum_all_a = 0;
    rep(i, 5) sum_all_a += a.at(i);

    vector<int> sum_2a(25, INT_MAX);
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            sum_2a.at(count) = a.at(i) + a.at(j);
            count++;
        }
    }

    sort(sum_2a.begin(), sum_2a.end());

    int answer = sum_all_a - sum_2a.at(2);
    cout << answer << endl;
}