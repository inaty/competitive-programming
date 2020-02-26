#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;


// 入出力のテスト
int
main()
{
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    ofstream ofs("output.txt");
    cout.rdbuf(ofs.rdbuf());

    int N, M, K, V;
    cin >> N >> M >> K >> V;
    vector<int> c(N), v(N);
    rep(i, N) cin >> c.at(i) >> v.at(i);

    vector<int> col(N);
    rep(i, N)
    {
        col.at(i) = 0;
    }

    rep(i, N)
    {
        cout << col.at(i) << endl;
    }
}