#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> A(n + 2, 0);
    rep(i, n) cin >> A.at(i + 1);

    int all_length = 0;
    for (int i = 0; i <= n; i++)
    {
        all_length += abs(A.at(i) - A.at(i + 1));
    }

    for (int i = 1; i <= n; i++)
    {
        cout << all_length + abs(A.at(i - 1) - A.at(i + 1)) - (abs(A.at(i - 1) - A.at(i)) + abs(A.at(i) - A.at(i + 1))) << endl;
    }
}