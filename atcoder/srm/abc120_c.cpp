#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;

    int red_count = 0, blue_count = 0;

    rep(i, s.size())
    {
        if (s[i] == '0')
        {
            red_count++;
        }
        else
        {
            blue_count++;
        }
    }

    cout << min(red_count, blue_count) * 2 << endl;
}