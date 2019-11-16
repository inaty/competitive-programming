#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    int x = 0, int_max = -INT_MAX;
    int_max = max(x, int_max);
    rep(i, n)
    {
        if (s[i] == 'I')
        {
            x++;
        }
        if (s[i] == 'D')
        {
            x--;
        }
        int_max = max(x, int_max);
    }

    cout << int_max << endl;
}