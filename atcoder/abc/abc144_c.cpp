#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long int n;
    cin >> n;

    long long int min_steps = LONG_LONG_MAX;
    for (long long int i = (int)(sqrt(n)) + 1; i >= 1; i--)
    {
        if (n % i == 0)
        {
            long long int steps = (long long int)(n / i) - 1 + i - 1;
            min_steps = min(min_steps, steps);
        }
    }
    cout << min_steps << endl;
}