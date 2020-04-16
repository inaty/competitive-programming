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

    int answer1 = 0, answer2 = 0;
    string JOI = "JOI", IOI = "IOI";
    for (int i = 0; i < int(s.size()) - 2; i++)
    {
        if (s.at(i) == JOI.at(0) && s.at(i + 1) == JOI.at(1) && s.at(i + 2) == JOI.at(2))
            answer1++;
        if (s.at(i) == IOI.at(0) && s.at(i + 1) == IOI.at(1) && s.at(i + 2) == IOI.at(2))
            answer2++;
    }

    cout << answer1 << endl;
    cout << answer2 << endl;
}