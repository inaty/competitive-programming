#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;

    string answer = "No";
    for (int i = 1; i <= 9; i++)
    {
        if ((n % i == 0) & (n / i <= 9))
        {
            answer = "Yes";
            break;
        }
    }
    cout << answer << endl;
}