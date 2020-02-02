#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    int h, a;
    cin >> h >> a;

    int answer = 0;
    while (h > 0)
    {
        answer++;
        h -= a;
    }

    cout << answer << endl;
}