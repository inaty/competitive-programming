#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> h(n);
    rep(i, n) cin >> h.at(i);
    vector<int> a(m), b(m);
    rep(i, m)
    {
        cin >> a.at(i) >> b.at(i);
        a.at(i)--;
        b.at(i)--;
    }

    vector<set<int>> vs(n);
    rep(i, m)
    {
        vs.at(a.at(i)).insert(b.at(i));
        vs.at(b.at(i)).insert(a.at(i));
    }

    int answer = 0;
    rep(i, n)
    {
        bool is_good = true;
        set<int> connect_towers = vs.at(i);
        for (auto itr = connect_towers.begin(); itr != connect_towers.end(); itr++)
        {
            if (h.at(i) <= h.at(*itr))
            {
                is_good = false;
                break;
            }
        }
        if (is_good)
            answer++;
    }

    cout << answer << endl;
}