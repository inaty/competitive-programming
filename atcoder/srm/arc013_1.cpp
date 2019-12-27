#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, m, l;
    cin >> n >> m >> l;
    vector<int> a(3);
    rep(i, 3) cin >> a.at(i);

    int answer = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (i != j && j != k && k != i)
                {
                    answer = max(answer, (n / a.at(i)) * (m / a.at(j)) * (l / a.at(k)));
                }
            }
        }
    }

    cout << answer << endl;
}