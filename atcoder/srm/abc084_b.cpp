#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    string answer = "Yes";
    rep(i, a + b + 1)
    {
        if (i != a)
        {
            if (!isdigit(s.at(i)))
            {
                answer = "No";
                break;
            }
        }
        else
        {
            if (s.at(i) != '-')
            {
                answer = "No";
                break;
            }
        }
    }

    cout << answer << endl;
}