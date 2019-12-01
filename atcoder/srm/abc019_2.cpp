#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;

    string answer = "";
    int cnt_continue = 1;
    for (int i = 0; i < int(s.size()) - 1; i++)
    {
        if (s.at(i) == s.at(i + 1))
        {
            cnt_continue++;
        }
        else
        {
            answer = answer + s.at(i) + to_string(cnt_continue);
            cnt_continue = 1;
        }
    }

    answer = answer + s.at(int(s.size()) - 1) + to_string(cnt_continue);
    cout << answer << endl;
}