#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    // vector<int> x(n), y(n);
    // rep(i, n) { cin >> x.at(i) >> y.at(i); }

    int load_number = 1;
    for (int i = 1; i <= n; i++)
    {
        load_number *= i;
    }
    load_number -= n * (n - 1) / 2;

    // for (int i = 0; i <)
    cout << load_number << endl;
}