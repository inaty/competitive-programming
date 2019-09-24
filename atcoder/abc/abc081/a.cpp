#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;

    int answer = 0;
    for (auto c : s)
    {
        if (c == '1')
            answer++;
    }
    cout << answer << endl;
}