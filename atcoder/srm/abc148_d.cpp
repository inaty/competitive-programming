#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    int answer_num = 0;
    int count = 1;
    rep(i, n)
    {
        if (a.at(i) == count)
        {
            count++;
        }
        else
        {
            answer_num++;
        }
    }

    if (count == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << answer_num << endl;
    }
}