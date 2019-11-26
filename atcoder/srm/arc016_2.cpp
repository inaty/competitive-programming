#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    vector<vector<char>> x(n + 2, vector<char>(9, '.'));

    rep(i, n)
    {
        string s;
        cin >> s;
        rep(j, 9)
        {
            x.at(i + 1).at(j) = s.at(j);
        }
    }

    int answer = 0;
    rep(j, 9)
    {
        for (int i = 1; i < n + 1; i++)
        {
            if (x.at(i).at(j) == 'x')
            {
                answer++;
            }
            else if ((x.at(i).at(j) == 'o') & (x.at(i + 1).at(j) != 'o'))
            {
                answer++;
            }
        }
    }

    cout << answer << endl;
}