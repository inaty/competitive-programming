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
    string s;
    cin >> s;

    ll answer = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         for (int k = j + 1; k < n; k++)
    //         {
    //             if (s.at(i) != s.at(j) && s.at(i) != s.at(k) && s.at(j) != s.at(k) && j - i != k - j)
    //                 answer++;
    //         }
    //     }
    // }

    for (int j = 1; j < n - 1; j++)
    {
        char middle_s = s.at(j);

        map<char, int> front_color, back_color;
        front_color['R'] = 0;
        front_color['G'] = 0;
        front_color['B'] = 0;
        back_color['R'] = 0;
        back_color['G'] = 0;
        back_color['B'] = 0;
        for (int i = 0; i < j; i++)
            front_color[s.at(i)]++;
        for (int k = j + 1; k < n; k++)
            back_color[s.at(k)]++;

        if (middle_s == 'R')
        {
            answer += front_color['G'] * back_color['B'];
            answer += front_color['B'] * back_color['G'];
        }
        else if (middle_s == 'G')
        {
            answer += front_color['R'] * back_color['B'];
            answer += front_color['B'] * back_color['R'];
        }
        else if (middle_s == 'B')
        {
            answer += front_color['R'] * back_color['G'];
            answer += front_color['G'] * back_color['R'];
        }

        for (int l = 1; l < max(j, n - j); l++)
        {
            if(j-l<0 || j+l>n-1)
                break;
            if (s.at(j - l) != s.at(j + l) && s.at(j - l) != s.at(j) && s.at(j + l) != s.at(j))
                answer--;
        }

        // cout << j << " " << middle_s << " " << answer << endl;
    }

    cout << answer << endl;
}
