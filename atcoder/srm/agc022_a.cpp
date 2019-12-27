#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;

    map<char, int> mp;
    rep(i, s.size()) mp[s.at(i)]++;

    if (s == "zyxwvutsrqponmlkjihgfedcba")
    {
        cout << -1 << endl;
        return 0;
    }

    string answer = "-1";

    if (s.size() != 26)
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            if (mp.count(c) == 0)
            {
                answer = s + c;
                break;
            }
        }
        cout << answer << endl;
        return 0;
    }
    else
    {
        string t = s;
        answer = "";
        next_permutation(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++)
        {
            answer += s.at(i);
            if (t.at(i) != s.at(i))
                break;
        }
        cout << answer << endl;
        return 0;
    }
    return 0;
}