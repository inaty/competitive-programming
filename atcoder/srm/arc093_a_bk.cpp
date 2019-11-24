#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> A(n, 0);
    rep(i, n) cin >> A.at(i);

    for (int i = 1; i <= n; i++)
    {
        vector<int> B(n + 1, 0);
        int index_num = 1;
        for (int j = 1; j <= n; j++)
        {
            if (i != j)
            {
                B.at(index_num) = A.at(j - 1);
                index_num++;
            }
        }

        int sum_price = 0;
        for (int j = 1; j < n + 1; j++)
        {
            sum_price += abs(B.at(j) - B.at(j - 1));
        }
        cout << sum_price << endl;
    }
}