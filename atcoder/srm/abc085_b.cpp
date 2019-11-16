#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i, n) cin >> d.at(i);
    sort(d.begin(), d.end(), greater<int>());
    int min_size = d.at(0), answer = 1;
    for (int i = 1; i < n; i++)
    {
        if (d.at(i) < min_size)
        {
            min_size = d.at(i);
            answer += 1;
        }
    }
    cout << answer << endl;
}