#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    if (int(a.size()) > int(b.size()))
    {
        cout << "GREATER" << endl;
        return 0;
    }
    else if (int(a.size()) < int(b.size()))
    {
        cout << "LESS" << endl;
        return 0;
    }
    else if (int(a.size()) == int(b.size()))
    {
        for (int i = 0; i < int(a.size()); i++)
        {
            if (int(a.at(i)) > int(b.at(i)))
            {
                cout << "GREATER" << endl;
                return 0;
            }
            else if (int(a.at(i)) < int(b.at(i)))
            {
                cout << "LESS" << endl;
                return 0;
            }
        }
        cout << "EQUAL" << endl;
        return 0;
    }
}