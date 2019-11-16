#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    vector<int> a(3);
    cin >> a.at(0) >> a.at(1) >> a.at(2);
    std::sort(a.begin(), a.end(), greater<int>());
    cout << a.at(0) - a.at(2) << endl;
}