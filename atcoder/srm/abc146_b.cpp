#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    rep(i, int(s.size()))
    {
        int ascii_no = (int)s.at(i) + n;
        if (ascii_no <= 90)
        {
            cout << (char)ascii_no;
        }
        else
        {
            ascii_no = ascii_no - 90 + 64;
            cout << (char)ascii_no;
        }
    }
    cout << endl;
}