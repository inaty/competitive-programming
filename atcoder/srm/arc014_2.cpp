#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<string> w(n);
    rep(i, n) cin >> w.at(i);

    map<string, int> mp;
    mp[w.at(0)]++;

    int answer = -1;
    for (int i = 1; i < n; i++)
    {
        if ((w.at(i - 1).at(int(w.at(i - 1).size() - 1))) != w.at(i).at(0))
        {
            answer = i;
            break;
        }
        if (mp.count(w.at(i)) != 0)
        {
            answer = i;
            break;
        }
        mp[w.at(i)]++;
    }

    if (answer == -1)
    {
        cout << "DRAW" << endl;
    }
    else if (answer % 2 == 0)
    {
        cout << "LOSE" << endl;
    }
    else
    {
        cout << "WIN" << endl;
    }
}