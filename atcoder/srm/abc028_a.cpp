#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    if (n <= 59)
    {
        cout << "Bad" << endl;
    }
    else if (n <= 89)
    {
        cout << "Good" << endl;
    }
    else if (n <= 99)
    {
        cout << "Great" << endl;
    }
    else if (n == 100)
    {
        cout << "Perfect" << endl;
    }
}