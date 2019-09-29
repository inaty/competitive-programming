#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int h, w;
    cin >> h >> w;

    vector<vector<char>> s(h + 2, vector<char>(w + 2)), answer(h + 2, vector<char>(w + 2));
    for (int i = 0; i < h + 2; i++)
    {
        for (int j = 0; j < w + 2; j++)
        {
            s.at(i).at(j) = '.';
        }
    }

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cin >> s.at(i).at(j);
        }
    }

    copy(s.begin, s.begin, answer.begin);

    vector<int> dx = {-1, 0, 1, -1, 1, -1, 0, 1};
    vector<int> dy = {-1, -1, -1, 0, 0, 1, 1, 1};

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            int tmp = 0;
            for (int k = 0; k < 8; k++)
            {
                if (s.at(i + dy.at(k)).at(j + dx.at(k)) == '#')
                {
                    tmp += 1;
                }
            }
            if (s.at(i).at(j) != '#')
            {
                s.at(i).at(j) = (char)(tmp);
            }
            cout << s.at(i).at(j);
        }
        cout << endl;
    }
}