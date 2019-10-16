#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    vector<int> n(3);
    cin >> n.at(0) >> n.at(1) >> n.at(2);
    std::sort(n.begin(), n.end(), std::greater<int>());
    cout << 10 * n.at(0) + n.at(1) + n.at(2) << endl;
}