#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> l(n), r(n);
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> l.at(i) >> r.at(i);
        answer += r.at(i) - l.at(i) + 1;
    }
    cout << answer << endl;
}