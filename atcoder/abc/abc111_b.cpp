#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    int answer = 0;
    for (int i = n; i <= 999; i++)
    {
        string sn = to_string(i);
        if (sn.at(0) == sn.at(1) and sn.at(1) == sn.at(2))
        {
            answer = i;
            break;
        }
    }
    cout << answer << endl;
}