#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long n, m;
    cin >> n >> m;

    // n<=mにする
    if (n > m)
        swap(n, m);

    long long answer = -1;
    if (n == m)
    {
        answer = 1;
        for (long long i = n; i > 1; i--)
        {
            answer = (answer * i) % 1000000007;
            answer = (answer * i) % 1000000007;
        }
        answer = (answer * 2) % 1000000007;
    }
    else if (n + 1 == m)
    {
        answer = 1;
        for (long long i = n; i >= 1; i--)
        {
            answer = (answer * i) % 1000000007;
        }
        for (long long i = m; i >= 1; i--)
        {
            answer = (answer * i) % 1000000007;
        }
    }
    else
    {
        answer = 0;
    }

    cout << answer << endl;
}