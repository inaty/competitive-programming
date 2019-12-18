#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, m;
    cin >> n >> m;

    double N = 30 * (n % 12) + 0.5 * m, M = 6 * m;
    double answer = abs(N - M);
    if (answer > 180)
    {
        answer = 360 - answer;
    }
    cout << answer << endl;
}