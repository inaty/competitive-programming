#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int a, b;
    cin >> a >> b;

    int answer = -1;
    if (a == b)
    {
        answer = 0;
    }
    else if (a < b)
    {
        answer = min(b - a, (a - 0) + (9 - b + 1));
    }
    else
    {
        answer = min(a - b, (b - 0) + (9 - a + 1));
    }
    cout << answer << endl;
}