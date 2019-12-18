#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int vector_finder(std::vector<int> vec, int number)
{
    auto itr = std::find(vec.begin(), vec.end(), number);
    size_t index = std::distance(vec.begin(), itr);
    if (index != vec.size())
    { // 発見できたとき
        return 1;
    }
    else
    { // 発見できなかったとき
        return 0;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> x(n, vector<int>(n, -1)), y(n, vector<int>(n, -1));

    // cout << "----------" << endl;
    rep(i, n)
    {
        cin >> a.at(i);
        rep(j, a.at(i))
        {
            // cout << i << " " << j << endl;
            cin >> x.at(i).at(j) >> y.at(i).at(j);
        }
    }

    // cout << "input end." << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << x.at(i).at(j) << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "-------------" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << y.at(i).at(j) << " ";
    //     }
    //     cout << endl;
    // }

    int answer = 0;
    for (int bit = 0; bit < (1 << n); ++bit)
    {
        // 正直な人の集合
        vector<int> s;
        // 不親切な人の集合
        vector<int> ns;
        for (int i = 0; i < n; i++)
        {
            if (bit & (1 << i))
            {
                s.push_back(i + 1);
            }
            else
            {
                ns.push_back(i + 1);
            }
        }

        // cout << bit << ": s{";
        // for (int i = 0; i < (int)s.size(); i++)
        // {
        //     cout << s[i] << " ";
        // }
        // cout << "}" << endl;
        // cout << bit << ": ns{";
        // for (int i = 0; i < (int)ns.size(); i++)
        // {
        //     cout << ns[i] << " ";
        // }
        // cout << "}" << endl;

        // 正直な人にだけ証言してもらい。矛盾していないか確認する。矛盾している場合はループを抜ける
        bool mujun = false;
        for (int m = 0; m < (int)s.size(); m++)
        {
            int i = s.at(m);
            // cout << "i :" << i << endl;
            if (mujun)
            {
                break;
            }
            for (int j = 0; j < n; j++)
            {
                // 証言がある場合
                if (y.at(i - 1).at(j) != -1)
                {
                    // cout << "test:" << i << " " << j << " " << y.at(i - 1).at(j) << " " << x.at(i - 1).at(j) << endl;
                    // 矛盾した場合ループを抜ける
                    // xijは正直者である。かつ、正直者の集団にxijがいない。->矛盾
                    if ((y.at(i - 1).at(j) == 1) & (vector_finder(s, x.at(i - 1).at(j)) == 0))
                    {
                        // cout << "mujun1:" << i << " " << j << endl;
                        mujun = true;
                        break;
                    }
                    // xijは不親切な人である。かつ、正直者の集団にxijがいる。->矛盾
                    if ((y.at(i - 1).at(j) == 0) & (vector_finder(s, x.at(i - 1).at(j)) == 1))
                    {
                        // cout << "mujun2:" << i << " " << j << endl;
                        mujun = true;
                        break;
                    }
                }
            }
        }
        if (mujun == false)
        {
            answer = max(answer, int(s.size()));
        }
    }
    cout << answer << endl;
}