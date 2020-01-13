#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> p(m);
    vector<string> s(m);
    rep(i, m) cin >> p.at(i) >> s.at(i);

    map<int, int> ac, wa;
    rep(i, m)
    {
        if (s.at(i) == "AC")
        {
            ac[p.at(i)]++;
        }
        else if (s.at(i) == "WA")
        {
            // 過去にACしていないとき
            if (ac.count(p.at(i)) == 0)
            {
                wa[p.at(i)]++;
            }
        }
    }

    int ac_count = 0, wa_count = 0;
    for (auto itr = ac.begin(); itr != ac.end(); itr++)
    {
        ac_count++;
    }
    for (auto itr = wa.begin(); itr != wa.end(); itr++)
    {
        if (ac.count(itr->first) > 0)
        {
            wa_count += itr->second;
        }
    }

    cout << ac_count << " " << wa_count << endl;
}