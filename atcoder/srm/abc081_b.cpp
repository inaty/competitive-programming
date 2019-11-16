#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool is_all_even(vector<int> a)
{
    for (auto e : a)
    {
        if (e % 2 == 1)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a.at(i);
    int answer = 0;
    while (is_all_even(a))
    {
        answer++;
        for (int i = 0; i < n; i++)
            a.at(i) /= 2;
    }
    cout << answer << endl;
}