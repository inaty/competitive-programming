#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long a, b;
    cin >> a;
    cin >> b;
    if (a > b)
    {
        cout << "GREATER" << endl;
    }
    else if (a < b)
    {
        cout << "LESS" << endl;
    }
    else if (a == b)
    {
        cout << "EQUAL" << endl;
    }
}