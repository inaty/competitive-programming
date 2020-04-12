#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int digit_length(int n)
{
    return int(to_string(n).size());
}

int main()
{
    int n;
    cin >> n;
    int len_n = digit_length(n);
    string str_n = to_string(n);

    int answer = 0;
    // for (int a = 1; a <= n; a++)
    // {
    //     for (int b = 1; b <= n; b++)
    //     {
    //         int len_a = digit_length(a), len_b = digit_length(b);
    //         string str_a = to_string(a), str_b = to_string(b);

    //         if(str_a.at(0)==str_b.at(len_b-1) && str_a.at(len_a-1)==str_b.at(0)){
    //             answer++;
    //         }
    //     }
    // }

    for (int a = 1; a <= n; a++)
    {
        int len_a = digit_length(a);
        int max_digit_b, min_digit_b;
        if (len_a == 1)
        {
            max_digit_b = a;
            min_digit_b = a;
        }
        else
        {
            string str_a = to_string(a);
            max_digit_b = stoi(str_a.(len_a - 1));
            min_digit_b = stoi(str_a.(0));
        }

        int dp[len_n + 2][2][2];

        dp[0][0][0] = 1;

        for (int i = 0; i < len_n;i++){
            for (int smaller = 0; smaller < 2;smaller++){
                for (int j = 0; j < 2;j++){
                    dp[i+1][smaller || x<]
                }
            }
        }

        // 試すbの桁数
        // for (int d = 1; d <= len_n;d++){
            // 一番最初の桁とそれ以外
            // int temp = 1;
            // for (int i = 0; i < d; i++)
            // {
                // if(i == 0){
                    // if(max_digit_b <= atoi(str_n(0)))
                // }
            // }
        // }
    }

    cout << answer << endl;
}