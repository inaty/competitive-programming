#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string a, b;
    cin >> a >> b;
    int ab = stoi(a + b);

    if ((int)(sqrt(ab)) * (int)(sqrt(ab)) == ab)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}