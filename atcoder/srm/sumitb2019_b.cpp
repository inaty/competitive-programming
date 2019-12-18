#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    int x = (int)(n / 1.08);

    string answer = ":(";
    for (int x = 1; x <= n; x++)
    {
        if (((int)(x * 1.08)) == n)
        {
            answer = to_string(x);
            break;
        }
    }

    cout << answer << endl;
}