#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int hex_to_degit(char x)
{
    if (x == 'F')
        return 15;
    if (x == 'E')
        return 14;
    if (x == 'D')
        return 13;
    if (x == 'C')
        return 12;
    if (x == 'B')
        return 11;
    if (x == 'A')
        return 10;
    return (int)x;
}

int main()
{
    char x, y;
    cin >> x >> y;
    int nx = hex_to_degit(x), ny = hex_to_degit(y);
    if (nx < ny)
    {
        cout << "<" << endl;
    }
    else if (nx > ny)
    {
        cout << ">" << endl;
    }
    else if (nx == ny)
    {
        cout << "=" << endl;
    }
}