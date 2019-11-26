#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long Q, H, S, D;
    cin >> Q >> H >> S >> D;
    long long n;
    cin >> n;

    int d = min(D, min(2 * S, min(4 * H, 8 * Q)));
    int s = min(S, min(2 * H, 4 * Q));
    int h = min(H, 2 * Q);
    int q = Q;

    n = n * 4;
    long long answer = 0;
    answer += n / 8 * d;
    n = n % 8;
    answer += n / 4 * s;
    n = n % 4;
    answer += n / 2 * h;
    n = n % 2;
    answer += n * q;

    cout << answer << endl;
}