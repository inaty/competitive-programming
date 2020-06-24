#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int t;
    cin >> t;
    rep(i, t)
    {
        int n;
        cin >> n;
        vector<int> b(n);
        set<int> st_b;
        rep(j, n)
        {
            cin >> b.at(j);
            st_b.insert(b.at(j));
        }

        priority_queue<int> q_c;
        rep(j, 2 * n)
        {
            if (st_b.count(j + 1) == 0)
                q_c.push(j + 1);
        }

        vector<int> b2 = b;
        sort(b2.begin(), b2.end(), greater<int>());

        bool is_ok = true;
        map<int, int> pair_b_c;
        rep(j, n)
        {
            if (q_c.top() > b2.at(j))
            {
                pair_b_c[b2.at(j)] = q_c.top();
                q_c.pop();
            }
            else
            {
                is_ok = false;
                break;
            }
        }


        if (is_ok == false)
        {
            cout << -1 << endl;
        }
        else
        {
            rep(j, n)
            {
                if (j != n - 1)
                {
                    cout << b.at(j) << " " << pair_b_c[b.at(j)] << " ";
                }
                else
                {
                    cout << b.at(j) << " " << pair_b_c[b.at(j)] << endl;
                }
            }
        }
    }
}