#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    string s;
    cin >> s;

    // map<char, int> mp;
    // rep(i, int(s.size()))
    // {
    //     mp[s.at(i)]++;
    // }
    // int max_value = 0;
    // char max_key;
    // for (auto x : mp)
    // {
    //     if (max_value < x.second)
    //     {
    //         max_value = x.second;
    //         max_key = x.first;
    //     }
    // }

    int answer = 0;

    while (true)
    {
        map<char, int> mp;
        rep(i, int(s.size()))
        {
            mp[s.at(i)]++;
        }
        int max_value = 0;
        char max_key;
        for (auto x : mp)
        {
            if (max_value < x.second)
            {
                max_value = x.second;
                max_key = x.first;
            }
        }

        if (int(mp.size()) == 1)
            break;

        answer++;
        string next_s = "";
        rep(i, int(s.size()) - 1)
        {
            if (s.at(i) == max_key || s.at(i + 1) == max_key)
            {
                next_s += max_key;
            }
            else
            {
                next_s += s.at(i);
            }
        }
        cout << next_s << endl;
        cout << mp.size() << endl;
        cout << "----------" << endl;
        s = next_s;
    }
    cout << answer << endl;
}