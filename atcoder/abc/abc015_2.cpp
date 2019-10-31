#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    int bug_soft_num = 0, bug_count = 0;
    rep(i, n)
    {
        if (a.at(i) != 0)
            bug_soft_num++;

        bug_count += a.at(i);
    }

    cout << (int)ceil(bug_count / (double)bug_soft_num) << endl;
}