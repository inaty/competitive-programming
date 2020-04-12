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
    int temp_answer;

    // 無回転でマス目の色を塗り返す場合
    temp_answer = count_fill_cells(s, t, n);
    answer = min(answer, temp_answer);

    // 回転後のポスター
    vector<string> rotate_s = s;

    // 右回転してからマス目の色を塗り替える場合
    temp_answer = 1 + count_fill_cells(rotate_clockwise(s, n), t, n);
    answer = min(answer, temp_answer);

    // 左回転してからマス目の色を塗り替える場合
    temp_answer = 1 + count_fill_cells(rotate_clockwise(rotate_clockwise(rotate_clockwise(s, n), n), n), t, n); // 右に３回転で左に１回転した結果に合わせる
    answer = min(answer, temp_answer);

    // １８０度回転してからマス目の色を塗り替える場合
    temp_answer = 2 + count_fill_cells(rotate_clockwise(rotate_clockwise(s, n), n), t, n); // 右に2回転で反転
    answer = min(answer, temp_answer);

    cout << answer << endl;
}