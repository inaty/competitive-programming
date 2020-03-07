#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> s(m);
    vector<char> c(m);
    rep(i, m) cin >> s.at(i) >> c.at(i);

    int begin, end;
    if (n == 1)
    {
        begin = 0;
        end = 9;
    }
    else if (n == 2)
    {
        begin = 10;
        end = 99;
    }
    else if (n == 3)
    {
        begin = 100;
        end = 999;
    }

    int answer = -1;
    for (int i = begin; i <= end; i++)
    {
        string number = to_string(i);
        bool is_ok = true;
        for (int j = 0; j < m; j++)
        {
            if (number.at(s.at(j) - 1) != c.at(j))
            {
                is_ok = false;
                break;
            }
        }
        if (is_ok == true)
        {
            answer = i;
            break;
        }
    }

    cout << answer << endl;
}