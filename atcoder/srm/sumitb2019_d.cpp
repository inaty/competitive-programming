#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int answer = 0;
    for (int i1 = 0; i1 <= 9; i1++)
    {
        for (int i2 = 0; i2 <= 9; i2++)
        {
            for (int i3 = 0; i3 <= 9; i3++)
            {
                int i1index = s.find(to_string(i1));
                if (i1index == string::npos)
                {
                    continue;
                }
                int i3index = s.rfind(to_string(i3));
                if (i3index == string::npos)
                {
                    continue;
                }
                if (i1index + 2 <= i3index)
                {
                    int i2index = s.substr(i1index + 1, (i3index - i1index) - 1).find(to_string(i2));
                    if (i2index != string::npos)
                    {
                        answer++;
                    }
                }
            }
        }
    }

    cout << answer << endl;
}