#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    char x;
    cin >> x;
    string s;
    cin >> s;

    string answer;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) != x)
            answer += s.at(i);
    }

    cout << answer << endl;
}