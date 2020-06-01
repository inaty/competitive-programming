#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{

    for (int i = 1; i < 1000;i++){
        cout << 2019 * i << endl;
    }

    // string s;
    // cin >> s;

    // 2019の倍数の集合を作成
    // set<string> st;
    // for (ll i = 1; (int)(to_string(i * 2019l).size()) <= (int)(s.size()); i++)
    // {
    //     st.insert(to_string(i * 2019l));
    // }

    // cout << "st fin." << endl;

    // ll answer = 0;

    // // 2019の倍数の長さを決め打ちで決めて、それらを探索する
    // // 決め打ちの長さ:digit_length
    // for (int digit_length = 4; digit_length < int(s.size()); digit_length++)
    // {
    //     int begin_posi = 0;
    //     int end_posi = begin_posi + digit_length;

    //     while (end_posi < (int)(s.size()) - 1)
    //     {
    //         cout << begin_posi << " " << end_posi << endl;
    //         for (auto itr = st.begin(); itr != st.end(); itr++)
    //         {
    //             if (*itr == (s.substr(begin_posi, digit_length)))
    //             {
    //                 answer++;
    //             }
    //         }
    //         begin_posi++;
    //         end_posi = begin_posi + digit_length;
    //     }
    // }

    // cout << answer << endl;
}