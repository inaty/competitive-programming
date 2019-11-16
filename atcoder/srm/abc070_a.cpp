#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string n;
    cin >> n;
    if (n.at(0) == n.at(2))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}