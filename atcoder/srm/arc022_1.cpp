#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    string s;
    cin >> s;

    int same_cnt = 0;
    for (int i = 0; i < int(s.size()); i++)
    {
        if (same_cnt == 0)
        {
            if (s.at(i) == 'I' || s.at(i) == 'i')
            {
                same_cnt++;
            }
        }
        else if (same_cnt == 1)
        {
            if (s.at(i) == 'C' || s.at(i) == 'c')
            {
                same_cnt++;
            }
        }
        else if (same_cnt == 2)
        {
            if (s.at(i) == 'T' || s.at(i) == 't')
            {
                same_cnt++;
            }
        }
        else if (same_cnt > 2)
        {
            break;
        }
    }

    if (same_cnt == 3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}