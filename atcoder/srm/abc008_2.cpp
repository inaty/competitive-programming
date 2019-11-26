#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s.at(i);

    map<string, int> mp;
    rep(i, n)
    {
        mp[s.at(i)]++;
    }

    string answer;
    int index_max = -1;
    for (auto x : mp)
    {
        if (index_max < x.second)
        {
            answer = x.first;
            index_max = x.second;
        }
    }

    cout << answer << endl;
}