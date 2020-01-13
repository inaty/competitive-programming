#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    string answer = "NO";
    for (int i = a; i <= b * a; i += a)
    {
        if (i % b == c)
        {
            answer = "YES";
            break;
        }
    }
    cout << answer << endl;
}