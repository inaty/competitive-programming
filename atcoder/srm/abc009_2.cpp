#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// vecotorから同一要素を削除
vector<int> unique_vector(vector<int> vec)
{
    // 前準備でsortが必要
    sort(vec.begin(), vec.end());
    // unique()しただけでは後ろにゴミが残るので、eraseで削除する
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    return vec;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    a = unique_vector(a);

    sort(a.begin(), a.end(), greater<int>());

    cout << a.at(1) << endl;
}