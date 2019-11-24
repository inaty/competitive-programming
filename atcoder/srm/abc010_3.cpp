#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int txa, tya, txb, tyb, T, V;
    cin >> txa >> tya >> txb >> tyb >> T >> V;
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i, n) cin >> x.at(i) >> y.at(i);

    string answer = "NO";
    for (int i = 0; i < n; i++)
    {
        if (sqrt(pow(x.at(i) - txa, 2) + pow(y.at(i) - tya, 2)) + sqrt(pow(x.at(i) - txb, 2) + pow(y.at(i) - tyb, 2)) <= V * T)
        {
            answer = "YES";
            break;
        }
    }

    cout << answer << endl;
}