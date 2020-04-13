#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

// ポスターを90度時計まわりに回転
vector<string> rotate_clockwise(vector<string> s, int n)
{
    vector<string> res = s;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            res.at(j - 1).at(n - i) = s.at(i - 1).at(j - 1);
        }
    }
    return res;
}

vector<string> rotate_clockwise(vector<string> s, int n, int times)
{
    if (times == 0)
    {
        return s;
    }
    else
    {
        auto ret = s;
        for (int i = 0; i < times; i++)
        {
            ret = rotate_clockwise(ret, n);
        }
        return ret;
    }
}

// ポスターsをポスターtにするために塗りつぶすマスの数を計算する
int count_fill_cells(vector<string> s, vector<string> t, int n)
{
    int res = 0;
    rep(i, n)
    {
        rep(j, n)
        {
            if (s.at(i).at(j) != t.at(i).at(j))
            {
                res++;
            }
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    rep(i, n) cin >> s.at(i);
    rep(i, n) cin >> t.at(i);

    int answer = INT_MAX;

    vector<int> additional_cost = {0, 1, 2, 1};
    for (int rotate_time = 0; rotate_time < 4; rotate_time++)
    {
        auto s_rot = rotate_clockwise(s, n, rotate_time);
        const int temp_answer = count_fill_cells(s_rot, t, n) + additional_cost.at(rotate_time);
        answer = min(answer, temp_answer);
    }

    cout << answer << endl;
}