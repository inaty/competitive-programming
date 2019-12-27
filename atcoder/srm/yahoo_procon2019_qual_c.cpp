#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long k, a, b;
    cin >> k >> a >> b;

    long long answer = 1;
    rep(i, k)
    {
        if (answer < a)
        {
            answer++;
        }
        else if (i != k - 1)
        {
            if (b - a > 2)
            {
                answer += b - a;
                i++;
            }
            else
            {
                answer++;
            }
        }
        else
        {
            answer++;
        }
    }

    cout << answer << endl;
}