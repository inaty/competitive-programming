#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    double count = 0;
    double sum_point = 0;
    rep(i, n)
    {
        count++;
        if (s.at(i) == 'A')
        {
            sum_point += 4;
        }
        else if (s.at(i) == 'B')
        {
            sum_point += 3;
        }
        else if (s.at(i) == 'C')
        {
            sum_point += 2;
        }
        else if (s.at(i) == 'D')
        {
            sum_point += 1;
        }
    }

    cout << std::fixed << std::setprecision(14) << sum_point / count << endl;
}