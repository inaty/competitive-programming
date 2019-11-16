#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int x;
    cin >> x;
    int answer = 1;
    for (int b = 2; b <= x; b++)
    {
        int bp = b * b;
        for (int p = 2;; p++)
        {
            if (bp > x)
                break;
            answer = max(answer, bp);
            bp *= b;
        }
    }
    cout << answer << endl;
}