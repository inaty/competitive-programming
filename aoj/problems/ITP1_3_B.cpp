#include <bits/stdc++.h>
using namespace std;

template <typename T>
string to_string(const T &n)
{
    ostringstream stm;
    stm << n;
    return stm.str();
}

int main()
{
    int i = 1;
    while (1)
    {
        int x;
        cin >> x;
        if (x == 0)
            break;
        cout << "Case " + to_string(i) + ": " + to_string(x) << endl;
        i++;
    }
}