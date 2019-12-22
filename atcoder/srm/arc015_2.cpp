#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<double> max_t(n), min_t(n);
    rep(i, n) cin >> max_t.at(i) >> min_t.at(i);

    int answer = 0;

    // 猛暑日
    answer = 0;
    rep(i, n)
    {
        if (max_t.at(i) >= 35.0)
            answer++;
    }
    cout << answer << " ";

    // 真夏日
    answer = 0;
    rep(i, n)
    {
        if ((max_t.at(i) >= 30.0) & (max_t.at(i) < 35.0))
            answer++;
    }
    cout << answer << " ";

    // 夏日
    answer = 0;
    rep(i, n)
    {
        if ((max_t.at(i) >= 25.0) & (max_t.at(i) < 30.0))
            answer++;
    }
    cout << answer << " ";

    // 熱帯夜
    answer = 0;
    rep(i, n)
    {
        if (min_t.at(i) >= 25.0)
            answer++;
    }
    cout << answer << " ";

    // 冬日
    answer = 0;
    rep(i, n)
    {
        if ((min_t.at(i) < 0.0) & (max_t.at(i) >= 0.0))
            answer++;
    }
    cout << answer << " ";

    // 真冬日
    answer = 0;
    rep(i, n)
    {
        if (max_t.at(i) < 0.0)
            answer++;
    }
    cout << answer << endl;
}