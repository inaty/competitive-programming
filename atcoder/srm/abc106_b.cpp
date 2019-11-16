#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, answer = 0;
    cin >> n;
    for (int i = 1; i <= n; i += 2)
    {
        int diviser = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                diviser++;
            }
        }
        if (diviser == 8)
        {
            answer++;
        }
    }

    cout << answer << endl;
}