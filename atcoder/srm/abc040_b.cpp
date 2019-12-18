#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    int answer = INT_MAX;
    for (int i = 1; i <= (int)sqrt(n); i++)
    {
        int x = i, y = (int)n / i, r = n - x * y;
        answer = min(answer, ((int)abs(x - y)) + r);
    }
    cout << answer << endl;
}