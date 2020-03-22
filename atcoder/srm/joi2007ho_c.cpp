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
    vector<int> x(n), y(n);
    rep(i, n) cin >> x.at(i) >> y.at(i);

    vector<vector<bool>> mp(5001, vector<bool>(5001, false));
    rep(i, n) mp.at(x.at(i)).at(y.at(i)) = true;

    // 2つの点を選ぶ
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (mp.at(y.at(j)-y.at(i)+x.at(i)).at(-x.at(j)+x.at(i)+y.at(i))==true){

            }
        }
    }
}

