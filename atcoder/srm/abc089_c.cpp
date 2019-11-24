#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s.at(i);

    vector<long long> cnt(5, 0);
    string march = "MARCH";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (s.at(i).at(0) == march.at(j))
            {
                cnt.at(j) = cnt.at(j) + 1;
            }
        }
    }

    long long answer = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            for (int k = j + 1; k < 5; k++)
            {
                answer += cnt.at(i) * cnt.at(j) * cnt.at(k);
            }
        }
    }

    // rep(i, 5) cout << cnt.at(i) << endl;

    cout << answer << endl;
}