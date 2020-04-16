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
        string s;
        cin >> s;

        string answer = "";
        int count_inner = 0;
        for (int i = 0; i < int(s.size()); i++)
        {
            int pre_count_inner = count_inner;
            count_inner = s.at(i) - '0';
            for (int j = 0; j < count_inner - pre_count_inner; j++)
            {
                answer.push_back('(');
            }
            for (int j = 0; j < pre_count_inner - count_inner; j++)
            {
                answer.push_back(')');
            }
            answer.push_back(s.at(i));
        }
        for (int j = 0; j < count_inner; j++)
        {
            answer.push_back(')');
        }

        cout << "Case #" << (test_no + 1) << ": " << answer << endl;
    }
}