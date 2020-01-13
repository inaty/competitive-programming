#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int answer = 0;
    for (int i = 0; i < int(s.size()) - 2; i++)
    {
        if (s.at(i) == 'A' && s.at(i + 1) == 'B' && s.at(i + 2) == 'C')
        {
            answer++;
        }
    }

    cout << answer << endl;
}