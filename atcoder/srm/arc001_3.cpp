#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

#include <functional>
#include <iostream>

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f)
{
    if (rest == 0)
    {
        f(indexes);
    }
    else
    {
        if (s < 0)
            return;
        recursive_comb(indexes, s - 1, rest, f);
        indexes[rest - 1] = s;
        recursive_comb(indexes, s - 1, rest - 1, f);
    }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f)
{
    int indexes[k];
    recursive_comb(indexes, n - 1, k, f);
}

int main()
{
    vector<string> c(8);
    for (int i = 0; i < 8;i++){
        std::cin >> c.at(i);
    }

    bool is_q_in_diag = false;
    for (int i = 0; i < 8; i++)
    {
        if (c.at(i).at(i) == 'Q')
        {
            is_q_in_diag = true;
            break;
        }
        else if (c.at(i).at(7 - i) == 'Q')
        {
            is_q_in_diag = true;
            break;
        }
    }

    std::cout << is_q_in_diag << std::endl;

    // foreach_comb(61, 5, [](int *indexes) {
    //     std::cout << indexes[0] << ',';
    //     std::cout << indexes[1] << ',';
    //     std::cout << indexes[2] << ',';
    //     std::cout << indexes[3] << ',';
    //     std::cout << indexes[4] << std::endl;
    // });
}