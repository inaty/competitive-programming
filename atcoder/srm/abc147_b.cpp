#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;

    int s_len = int(s.size());

    if (s_len % 2 == 0)
    {
        int answer = 0;
        for (int i = 0; i < s_len / 2; i++)
        {
            if (s.at(i) != s.at(s_len - 1 - i))
            {
                answer++;
            }
        }
        cout << answer << endl;
        return 0;
    }
    else
    {
        int answer = 0;
        for (int i = 0; i < (s_len - 1) / 2; i++)
        {
            if (s.at(i) != s.at(s_len - 1 - i))
            {
                answer++;
            }
        }
        cout << answer << endl;
        return 0;
    }
}