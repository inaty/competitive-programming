#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    vector<int> antena(5);
    rep(i, 5) cin >> antena.at(i);
    int k;
    cin >> k;
    bool is_connect = true;
    rep(i, 5)
    {
        rep(j, 5)
        {
            if (i == j)
                continue;
            if (antena.at(i) - antena.at(j) > k)
            {
                is_connect = false;
            }
        }
    }
    if (is_connect == true)
        cout << "Yay!" << endl;
    else
        cout << ":(" << endl;
}