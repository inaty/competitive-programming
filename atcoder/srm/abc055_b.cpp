#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    int mod = 1000000007;
    long answer = 1;
    for (int i = 1; i <= n; i++)
    {
        answer = ((answer % mod) * (i % mod)) % mod;
    }
    cout << answer << endl;
}