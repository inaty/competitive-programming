#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n, m, d;
    cin >> n >> m >> d;
    vector<string> area(n);
    rep(i, n) cin >> area.at(i);

    int answer = 0;
    // まずは横向きを考える
    rep(i, n)
    {
        int count_continue_space = 0;
        rep(j, m)
        {
            if (area.at(i).at(j) == '#')
            {
                answer += max(0, count_continue_space - d + 1);
                count_continue_space = 0;
            }
            else if (area.at(i).at(j) == '.')
            {
                count_continue_space++;
            }
        }
        answer += max(0, count_continue_space - d + 1);
    }

    // 縦向きを考える
    rep(j, m)
    {
        int count_continue_space = 0;
        rep(i, n)
        {
            if (area.at(i).at(j) == '#')
            {
                answer += max(0, count_continue_space - d + 1);
                count_continue_space = 0;
            }
            else if (area.at(i).at(j) == '.')
            {
                count_continue_space++;
            }
        }
        answer += max(0, count_continue_space - d + 1);
    }

    cout << answer << endl;
}