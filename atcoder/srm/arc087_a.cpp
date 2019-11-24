#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[a.at(i)]++;

    int answer = 0;
    for (auto x : mp)
    {
        int number = x.first, count = x.second;
        if (count >= number)
        {
            answer += count - number;
        }
        else
        {
            answer += count;
        }
    }
    cout << answer << endl;
}