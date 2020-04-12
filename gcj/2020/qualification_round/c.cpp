#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int t;
    cin >> t;
    for (int test_no = 0; test_no < t; test_no++)
    {
        int n;
        cin >> n;
        vector<int> s(n), e(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s.at(i) >> e.at(i);
        }

        // string answer;
        vector<char> answer;
        rep(i, n) answer.push_back('.');


            // bool is_ok = false;
            // for (int bit = 0; bit < (1 << n); ++bit)
            // {
            //     answer = "";
            //     for (int i = 0; i < n; i++)
            //     {
            //         if (bit & (1 << i))
            //         {
            //             answer.push_back('C');
            //         }
            //         else
            //         {
            //             answer.push_back('J');
            //         }
            //     }

            //     vector<int> C_task_count(24 * 60 + 1, 0), J_task_count(24 * 60 + 1, 0);
            //     for (int i = 0; i < n; i++)
            //     {
            //         for (int j = s.at(i); j < e.at(i); j++)
            //         {
            //             if (bit & (1 << i))
            //             {
            //                 C_task_count.at(j)++;
            //             }
            //             else{
            //                 J_task_count.at(j)++;
            //             }
            //         }
            //     }

            //     if (*max_element(C_task_count.begin(), C_task_count.end()) <= 1 && *max_element(J_task_count.begin(), J_task_count.end()) <= 1)
            //     {
            //         is_ok = true;
            //         break;
            //     }
            // }

            // if (is_ok == false)
            //     answer = "IMPOSSIBLE";
            cout << "Case #" << (test_no + 1) << ": " << answer << endl;
    }
}