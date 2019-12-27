#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long n;
    cin >> n;

    if (n % 2l == 1l)
    {
        cout << 0 << endl;
    }
    else
    {
        long long answer = 0l;
        n /= 2;
        while (n)
        {
            answer += n / 5;
            n /= 5;
        }

        cout << answer << endl;
    }
}