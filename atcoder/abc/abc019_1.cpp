#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    vector<int> age(3);
    cin >> age.at(0) >> age.at(1) >> age.at(2);

    sort(age.begin(), age.end());

    cout << age.at(1) << endl;
}