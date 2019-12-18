#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p.at(i);

    int answer = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (p.at(i) == i + 1)
        {
            answer++;
            swap(p.at(i), p.at(i + 1));
        }
    }
    if (p.at(n - 1) == n)
    {
        answer++;
        swap(p.at(n - 1), p.at(n - 2));
    }
    cout << answer << endl;
}