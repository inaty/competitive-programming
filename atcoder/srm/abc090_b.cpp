#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    int answer = 0;
    for (int i = a; i <= b; i++)
    {
        s = to_string(i);
        if ((s.at(0) == s.at(4)) && (s.at(1) == s.at(3)))
            answer++;
    }
    cout << answer << endl;
}