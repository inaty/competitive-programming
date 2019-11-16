#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    if (s.at(n - 1) == 'T')
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}