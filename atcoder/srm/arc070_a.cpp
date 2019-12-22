#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long x;
    cin >> x;

    long long sum_i = 0;
    long long i = 0;
    while (sum_i < x)
    {
        i += 1l;
        sum_i += i;
    }

    cout << i << endl;
}