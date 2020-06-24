#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

using Graph = vector<vector<int>>;

// 深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v)
{
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v])
    {
        if (seen[next_v])
            continue;   // next_v が探索済だったらスルー
        dfs(G, next_v); // 再帰的に探索
    }
}

bool is_passed(const Graph &G, int n, int start, int end)
{
    // 頂点 s をスタートとした探索
    seen.assign(n, false); // 全頂点を「未訪問」に初期化
    dfs(G, start);

    // t に辿り着けるかどうか
    if (seen[end])
        return true;
    else
        return false;
}

// 深さ優先探索
vector<bool> seen2;
void dfs2(const Graph &G, vector<int> &path, int v)
{
    seen2[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v])
    {
        if (seen2[next_v])
            continue; // next_v が探索済だったらスルー
        path[next_v] = v + 1;
        dfs2(G, path, next_v); // 再帰的に探索
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i, m) cin >> a.at(i) >> b.at(i);

    // グラフ入力受取
    Graph G(n);
    for (int i = 0; i < m; ++i)
    {
        G[a.at(i) - 1].push_back(b.at(i) - 1);
        G[b.at(i) - 1].push_back(a.at(i) - 1);
    }

    bool is_all_ok = true;
    for (int i = 1; i < n; i++)
    {
        if (!is_passed(G, n, 0, i))
        {
            is_all_ok = false;
        }
    }

    if (!is_all_ok)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
        vector<int> path(m);
        seen2.assign(n, false); // 全頂点を「未訪問」に初期化
        dfs2(G, path, 0);
        for (int i = 1; i < n; i++)
        {
            cout << path.at(i) << endl;
        }
    }
}