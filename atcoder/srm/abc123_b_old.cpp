#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int a, b, c, d, e;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    // int min_ovehang = min({a % 10, b % 10, c % 10, d % 10, e % 10});
    int max_loss = max({10 - a % 10, 10 - b % 10, 10 - c % 10, 10 - d % 10, 10 - e % 10});

    // int answer = (ceil(a / 10.0) + ceil(b / 10.0) + ceil(c / 10.0) + ceil(d / 10.0) + ceil(e / 10.0)) * 10 - 10 + min_ovehang;
    int answer = (ceil(a / 10.0) + ceil(b / 10.0) + ceil(c / 10.0) + ceil(d / 10.0) + ceil(e / 10.0)) * 10 - max_loss;
    cout << answer << endl;
}