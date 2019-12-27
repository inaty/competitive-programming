#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int r, g, b, n;
    cin >> r >> g >> b >> n;

    int answer = 0;
    for (int ir = 0; ir <= n / r; ir++)
    {
        for (int ig = 0; ig <= (n - ir * r) / g; ig++)
        {
            if ((n - ir * r - ig * g) % b == 0)
                answer++;
        }
    }

    cout << answer << endl;
}