#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (s == "b")
    {
        cout << 0 << endl;
        return 0;
    }

    int answer = -1;
    string acc = "b";
    for (int i = 1; i < n; i++)
    {
        if (i % 3 == 1)
        {
            acc = "a" + acc + "c";
        }
        else if (i % 3 == 2)
        {
            acc = "c" + acc + "a";
        }
        else
        {
            acc = "b" + acc + "b";
        }
        if (s == acc)
        {
            answer = i;
            break;
        }
    }
    cout << answer << endl;
    return 0;
}