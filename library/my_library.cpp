#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 切り上げ関数
// a÷bの切り上げ
int round_up(int a, int b)
{
    return (a + b - 1) / b;
}

// 1のくらいを切り上げ、１０の倍数に変換
// 0 -> 0
// 1-9 -> 10
int round_up_ten(int i)
{
    return (i + 9) / 10 * 10;
}

// vecotorから同一要素を削除
vector<int> unique_vector(vector<int> vec)
{
    // 前準備でsortが必要
    std::sort(vec.begin(), vec.end());
    // unique()しただけでは後ろにゴミが残るので、eraseで削除する
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
    return vec;
}

// change minimum
// aよりbが小さかったら、aの値をbの値に置き換えて、trueを返す
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

// change maximum
// aよりbが大きかったら、aの値をbの値に置き換えて、trueを返す
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
