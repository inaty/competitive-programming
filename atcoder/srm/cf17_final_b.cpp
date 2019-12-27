#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;

    map<char, int> mp;
    rep(i, int(s.size())) mp[s.at(i)]++;

    int max_v = 0, min_v = s.size();
    for (char c = 'a'; c <= 'c'; c++)
    {
        max_v = max(max_v, mp[c]);
        min_v = min(min_v, mp[c]);
    }

    string answer = "NO";
    if (s.size() % 3 == 0 && max_v - min_v == 0)
    {
        answer = "YES";
    }
    else if (s.size() % 3 == 1 && max_v - min_v == 1)
    {
        answer = "YES";
    }
    else if (s.size() % 3 == 2 && max_v - min_v == 1)
    {
        answer = "YES";
    }

    cout << answer << endl;
}