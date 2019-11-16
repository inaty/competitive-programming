#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    long long div_no = 1000000007;
    long long answer = a % div_no * b % div_no * c % div_no % div_no;
    cout << answer << endl;
}