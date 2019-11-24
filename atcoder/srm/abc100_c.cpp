#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    vector<int> b(n);
    rep(i, n)
    {
        int cnt_b = 0;
        int number = a.at(i);
        while (number % 2 == 0)
        {
            cnt_b++;
            number /= 2;
        }
        b.at(i) = cnt_b;
    }

    cout << accumulate(b.begin(), b.end(), 0) << endl;
}