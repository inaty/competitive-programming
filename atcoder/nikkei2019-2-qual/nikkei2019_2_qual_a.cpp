#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    int answer = 0;
    for (int i = 1; i <= (int)n / 2; i++)
    {
        if (i != n - i)
        {
            answer++;
        }
    }

    cout << answer << endl;
}