#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n, k, r, s, p;
    cin >> n >> k;
    cin >> r >> s >> p;
    string t;
    cin >> t;

    int score = 0;
    string log;
    for (int i = 0; i < n; i++)
    {
        if (i - k < 0)
        {
            if (t.at(i) == 'r')
            {
                log.push_back('p');
                score += p;
            }
            else if (t.at(i) == 's')
            {
                log.push_back('r');
                score += r;
            }
            else if (t.at(i) == 'p')
            {
                log.push_back('s');
                score += r;
            }
        }
        else
        {
            // if (t.at(i) == t.at(i - k) && log.at(i - k) != 'x')
            if (t.at(i) == t.at(i - k))
            {
            }
            else
            {
                if (t.at(i) == 'r')
                {
                    log.push_back('p');
                    score += p;
                }
                else if (t.at(i) == 's')
                {
                    log.push_back('r');
                    score += r;
                }
                else if (t.at(i) == 'p')
                {
                    log.push_back('s');
                    score += s;
                }
            }
        }
    }

    cout << score << endl;
    for (auto itr = log.begin(); itr != log.end(); itr++)
    {
        cout << *itr;
    }
    cout << endl;
}

rspsspspsrpspsppprpsprpssprpsr
    prsrrsxxxpxrsrssspsrxpsrxsxxxp
