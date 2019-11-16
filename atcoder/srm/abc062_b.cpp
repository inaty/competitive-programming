#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> a(h + 2, string(w + 2, '#'));
    for (int i = 1; i < h + 1; i++)
    {
        for (int j = 1; j < w + 1; j++)
        {
            char c;
            cin >> c;
            a.at(i).at(j) = c;
        }
    }
    for (auto s : a)
    {
        cout << s << endl;
    }
}