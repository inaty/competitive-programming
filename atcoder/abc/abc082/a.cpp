#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 切り上げ関数
// a÷bの切り上げ
int round_up(int a, int b)
{
    return (a + b - 1) / b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    // cout << (a + b + 2 - 1) / 2 << endl;
    cout << round_up(a + b, 2) << endl;
}