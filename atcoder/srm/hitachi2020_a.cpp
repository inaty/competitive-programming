#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    string s;
    cin >> s;

    if(((int)s.size())%2!=0){
        cout << "No" << endl;
        return 0;
    }

    string answer = "Yes";
    rep(i, (int)s.size())
    {
        if (i % 2 == 0)
        {
            if (s.at(i) == 'h')
            {
                continue;
            }
            else
            {
                answer = "No";
                break;
            }
        }
        else
        {
            if (s.at(i) == 'i')
            {
                continue;
            }
            else
            {
                answer = "No";
                break;
            }
        }
    }

    cout << answer << endl;
}