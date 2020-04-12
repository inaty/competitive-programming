#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    rep(i, n) cin >> s.at(i);
    rep(i, n) cin >> t.at(i);

    int answer = INT_MAX;

    // 無回転でマス目の色を塗り返す場合
    int temp_answer = 0;
    rep(i, n)
    {
        rep(j, n)
        {
            if (s.at(i).at(j) != t.at(i).at(j))
            {
                temp_answer++;
            }
        }
    }
    answer = min(answer, temp_answer);

    // 右回転してからマス目の色を塗り替える場合
    vector<string> ts = s;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ts.at(j - 1).at(n - i) = s.at(i - 1).at(j - 1);
        }
    }
    temp_answer = 1; // 1回回転しているため
    rep(i, n)
    {
        rep(j, n)
        {
            if (ts.at(i).at(j) != t.at(i).at(j))
            {
                temp_answer++;
            }
        }
    }
    answer = min(answer, temp_answer);

    // 左回転してからマス目の色を塗り替える場合
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ts.at(n - j).at(i - 1) = s.at(i - 1).at(j - 1);
        }
    }
    temp_answer = 1; // 1回回転しているため
    rep(i, n)
    {
        rep(j, n)
        {
            if (ts.at(i).at(j) != t.at(i).at(j))
            {
                temp_answer++;
            }
        }
    }
    answer = min(answer, temp_answer);

    // １８０度回転してからマス目の色を塗り替える場合
    vector<string> ts2 = s;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ts.at(j - 1).at(n - i) = s.at(i - 1).at(j - 1);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ts2.at(j - 1).at(n - i) = ts.at(i - 1).at(j - 1);
        }
    }
    temp_answer = 2; // 2回回転しているため
    rep(i, n)
    {
        rep(j,n){
            if(ts2.at(i).at(j)!=t.at(i).at(j)){
                temp_answer++;
            }
        }
    }
    answer = min(answer, temp_answer);

    cout << answer << endl;
}