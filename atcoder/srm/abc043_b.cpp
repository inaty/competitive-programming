#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;

    string answer;

    rep(i, s.size())
    {
        if (s.at(i) == 'B')
        {
            if (answer.size() > 0)
                answer.pop_back();
        }
        else
        {
            answer += s.at(i);
        }
    }

    cout << answer << endl;
}