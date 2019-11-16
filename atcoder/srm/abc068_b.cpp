#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    int answer = 1;
    while (n > 1)
    {
        n /= 2;
        answer *= 2;
    }
    cout << answer << endl;
}