#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x.at(i);
        answer += min(2 * x.at(i), 2 * (k - x.at(i)));
    }
    cout << answer << endl;
}