#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, n)
    {
        cin >> a.at(i) >> b.at(i);
    }

    vector<vector<int>> ab(n, vector<int>(2));
    rep(i, n)
    {
        ab.at(i).at(0) = a.at(i);
        ab.at(i).at(1) = b.at(i);
    }

    sort(ab.begin(), ab.end(), [](const vector<int> &alpha, const vector<int> &beta) { return alpha[1] < beta[1]; });

    // cout << "-------------------" << endl;
    // rep(i, n)
    // {
    // cout << ab.at(i).at(0) << " " << ab.at(i).at(1) << endl;
    // }

    // cout << "-------------------" << endl;
    string answer = "Yes";
    int total_a = 0;
    rep(i, n)
    {
        total_a += ab.at(i).at(0);
        // cout << total_a << " " << ab.at(i).at(b) << endl;
        if (total_a > ab.at(i).at(1))
        {
            answer = "No";
        }
    }

    cout << answer << endl;
}