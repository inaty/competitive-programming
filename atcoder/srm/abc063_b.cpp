#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;

    set<char> S;

    for (int i = 0; i < s.size(); i++)
    {
        S.insert(s[i]);
    }

    if (s.size() == S.size())
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}