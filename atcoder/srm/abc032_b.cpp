#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;

    if (s.size() < k)
    {
        cout << 0 << endl;
        return 0;
    }

    map<string, int> mp;
    for (int i = 0; i < s.size() - k + 1; i++)
    {
        mp[s.substr(i, k)]++;
    }

    cout << mp.size() << endl;
    return 0;
}