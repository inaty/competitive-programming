#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, k;
     cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum_sub_a = 0;
            for (int l = i; l <= j; l++)
            {
                sum_sub_a += a.at(l);
            }
            if (sum_sub_a % k == (j - i))
            {
                answer++;
            }
        }
    }

    cout<< answer << endl;
}