#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;
    int t;
    cin >> t;

    int x = 0, y = 0, count_q = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == 'L')
        {
            x--;
        }
        else if (s.at(i) == 'R')
        {
            x++;
        }
        else if (s.at(i) == 'U')
        {
            y++;
        }
        else if (s.at(i) == 'D')
        {
            y--;
        }
        else if (s.at(i) == '?')
        {
            count_q++;
        }
    }

    if (t == 1)
    {
        int answer = abs(x) + abs(y) + count_q;
        cout << answer << endl;
    }
    else if (t == 2)
    {
        if (abs(x) + abs(y) - count_q >= 0)
        {
            int answer = abs(x) + abs(y) - count_q;
            cout << answer << endl;
        }else{
            int answer = (count_q - (abs(x) + abs(y)))%2;
            cout << answer << endl;
        }
    }
}