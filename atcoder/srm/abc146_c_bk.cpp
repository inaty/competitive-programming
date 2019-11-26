#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long a, b, x;
    cin >> a >> b >> x;

    long long answer = 0;
    for (long long dn = 10; dn >= 1; dn--)
    {
        long long n = min((long long)pow(10, dn) - 1, min((long long)1000000000, (long long)(x - b * dn) / a));
        if (n < 1)
        {
            continue;
        }
        if (dn == (long long)log10(n) + 1)
        {
            answer = max(answer, n);
        }
    }

    cout << answer << endl;
    return 0;
}