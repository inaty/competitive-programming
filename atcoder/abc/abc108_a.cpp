#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int k;
    cin >> k;

    int even_no = (int)ceil(k / 2);
    int odd_no = k - even_no;
    cout << odd_no * even_no << endl;
}