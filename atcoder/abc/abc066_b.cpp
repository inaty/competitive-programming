#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;
    int len_s = s.size();

    int answer = -1;
    for (int i = 1; i <= len_s; i++)
    {
        string s2 = s.substr(0, len_s - i);
        if ((s2.size()) % 2 == 0)
        {
            if (s2.substr(0, s2.size() / 2) == s2.substr(s2.size() / 2, s2.size() - 1))
            {
                answer = s2.size();
                break;
            }
        }
    }
    cout << answer << endl;
}