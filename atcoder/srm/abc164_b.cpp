#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int turn_no = 0;
    while (a > 0 && c > 0)
    {
        turn_no++;
        if (turn_no % 2 == 1)
        {
            c -= b;
        }
        else
        {
            a -= d;
        }
        if (a <= 0)
        {
            cout << "No" << endl;
            break;
        }
        else if (c <= 0)
        {
            cout << "Yes" << endl;
            break;
        }
    }
}