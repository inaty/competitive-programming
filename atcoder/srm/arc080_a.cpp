#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    int multiple_4 = 0, multiple_2_without_4 = 0;

    rep(i, n)
    {
        if (a.at(i) % 4 == 0)
        {
            multiple_4++;
        }
        else if (a.at(i) % 2 == 0)
        {
            multiple_2_without_4++;
        }
    }

    if (multiple_2_without_4 == 0 & n - multiple_4 - multiple_2_without_4 <= multiple_4 + 1)
    {
        cout << "Yes" << endl;
    }
    else if (multiple_2_without_4 != 0 & n - multiple_4 - multiple_2_without_4 <= multiple_4)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}