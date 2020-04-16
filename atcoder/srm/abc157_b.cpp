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
    vector<vector<int>> a(3, vector<int>(3));
    rep(i, 3)
    {
        rep(j, 3)
        {
            cin >> a.at(i).at(j);
        }
    }
    int n;
    cin >> n;
    set<int> st;
    rep(i, n)
    {
        int b;
        cin >> b;
        st.insert(b);
    }

    vector<vector<bool>> is_called(3, vector<bool>(3, false));
    rep(i, 3)
    {
        rep(j, 3)
        {
            if (st.count(a.at(i).at(j)) == 1)
            {
                is_called.at(i).at(j) = true;
            }
            // cout << is_called.at(i).at(j);
        }
        // cout << endl;
    }

    string answer = "No";
    rep(i, 3)
    {
        bool is_bingo = true;
        rep(j, 3)
        {
            if (is_called.at(i).at(j) == false)
            {
                is_bingo = false;
                break;
            }
        }
        if (is_bingo == true)
        {
            answer = "Yes";
            cout << answer << endl;
            return 0;
        }
    }

    rep(j, 3)
    {
        bool is_bingo = true;
        rep(i, 3)
        {
            if (is_called.at(i).at(j) == false)
            {
                is_bingo = false;
                break;
            }
        }
        if (is_bingo == true)
        {
            answer = "Yes";
            cout << answer << endl;
            return 0;
        }
    }

    bool is_bingo = is_called.at(0).at(0) & is_called.at(1).at(1) & is_called.at(2).at(2);
    if (is_bingo == true)
    {
        answer = "Yes";
        cout << answer << endl;
        return 0;
    }

    is_bingo = is_called.at(0).at(2) & is_called.at(1).at(1) & is_called.at(2).at(0);
    if (is_bingo == true)
    {
        answer = "Yes";
        cout << answer << endl;
        return 0;
    }

    cout << answer << endl;
    return 0;
}