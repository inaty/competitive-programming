#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool is_ok(int a, int b, int A, int B)
{
    string s_a = to_string(a), s_b = to_string(b);
    string s_A = to_string(A), s_B = to_string(B);
    int same_count = 0;
    for (int i = 0; i < 3; i++)
    {
        if (s_a.at(i) == s_A.at(i))
            same_count++;
        if (s_b.at(i) == s_B.at(i))
            same_count++;
    }

    if (same_count >= 5)
        return true;
    else
        return false;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int answer = -INT_MAX;
    for (int ai = 100; ai <= 999; ai++)
    {
        for (int bi = 100; bi <= 999; bi++)
        {
            if (is_ok(a, b, ai, bi))
            {
                answer = max(answer, ai - bi);
            }
        }
    }

    cout << answer << endl;
}