#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    map<long long, long long> mp;
    rep(i, n) mp[a.at(i)]++;

    string answer = "No";
    if (mp.size() == 1 && mp.begin()->first == 0)
    {
        answer = "Yes";
    }
    else if (n % 3 == 0)
    {
        if (mp.size() == 2)
        {
            pair<long long, long long> z = *(mp.begin());
            if (z.first == 0)
            {
                if (z.second == n / 3 || z.second == 2 * n / 3)
                    answer = "Yes";
            }
        }
        else if (mp.size() == 3)
        {
            answer = "Yes";
            long long xsum = 0;
            auto itr = mp.begin();
            while (itr != mp.end())
            {
                if (itr->second != n / 3)
                    answer = "No";
                xsum ^= itr->first;
                itr++;
            }
            if (xsum)
                answer = "No";
        }
    }
    cout << answer << endl;
}