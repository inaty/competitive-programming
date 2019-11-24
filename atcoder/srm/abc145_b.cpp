#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string answer = "Yes";
    if (n % 2 == 1)
    {
        answer = "No";
    }
    else if (n >= 2)
    {
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[i + n / 2])
            {
                answer = "No";
                break;
            }
        }
    }
    cout << answer << endl;
}