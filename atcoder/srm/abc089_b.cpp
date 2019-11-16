#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<char> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s.at(i);
    }
    string answer = "Three";
    for (int i = 0; i < n; i++)
    {
        if (s.at(i) == 'Y')
        {
            answer = "Four";
            break;
        }
    }
    cout << answer << endl;
}