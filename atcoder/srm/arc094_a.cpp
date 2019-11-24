#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    vector<int> x(3);
    cin >> x.at(0) >> x.at(1) >> x.at(2);

    sort(x.begin(), x.end());

    int answer = -1;
    for (int i = x.at(2); i <= 100; i++)
    {
        if ((3 * i) % 2 == (x.at(0) + x.at(1) + x.at(2)) % 2)
        {
            answer = (3 * i - (x.at(0) + x.at(1) + x.at(2))) / 2;
            break;
        }
    }
    cout << answer << endl;
}