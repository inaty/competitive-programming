#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;

    int answer = 0;
    for (int i = 1; i < int(s.size()); i++)
    {
        if (s.at(i) != s.at(i - 1))
            answer++;
    }
    cout << answer << endl;
}