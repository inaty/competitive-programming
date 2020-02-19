#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    ll h;
    cin >> h;

    ll answer = 0;
    ll monster_num = 1;
    while (h > 0)
    {
        answer += monster_num;
        monster_num *= 2;
        h = (ll)h / 2l;
    }

    if (h == 1)
    {
        answer += monster_num;
    }

    cout << answer << endl;
}