#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n;i++)
        cin >> a.at(i);

    long long min_a = INT_MAX, max_a = -INT_MAX, sum_a = 0;
    for (long long i = 0; i < n;i++){
        min_a = min(min_a, a.at(i));
        max_a = max(max_a, a.at(i));
        sum_a += a.at(i);
    }

    cout << min_a << " " << max_a << " " << sum_a << endl;
}