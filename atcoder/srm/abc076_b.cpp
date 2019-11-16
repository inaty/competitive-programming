#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, k;
    cin >> n >> k;
    int answer = 1;
    for (int i = 0; i < n; i++)
    {
        answer = min(answer * 2, answer + k);
    }
    cout << answer << endl;
}