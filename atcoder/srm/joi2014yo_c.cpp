#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int w, h, n;
    cin >> w >> h >> n;
    vector<int> x(n), y(n);
    rep(i, n) cin >> x.at(i) >> y.at(i);

    // 隣接関係を表すグラフ
    using Graph = vector<vector<int>>;
    Graph G(w * h);
    rep(i, w * h)
    {
        cout << i << endl;
        if (i / w >= 1)
        {
            cout << "a" << endl;
            G.at(i - w).push_back(i);
            G.at(i).push_back(i - w);
            cout << "a" << endl;
        }
        if (i % w <= w - 2)
        {
            cout << "b" << endl;
            G.at(i + 1).push_back(i);
            G.at(i).push_back(i + 1);
            cout << "b" << endl;
        }
        if (i / w <= h - 2)
        {
            cout << "c" << endl;
            G.at(i + w).push_back(i);
            G.at(i).push_back(i + w);
            cout << "c" << endl;
        }
        if (i % w >= 1)
        {
            cout << "d" << endl;
            G.at(i - 1).push_back(i);
            G.at(i).push_back(i - 1);
            cout << "d" << endl;
        }
        if (i / w >= 1 && i % w <= w - 2)
        {
            cout << "e" << endl;
            G.at(i - w + 1).push_back(i);
            G.at(i).push_back(i - w + 1);
            cout << "e" << endl;
        }
        if (i / w <= h - 2 && i % w >= 1)
        {
            cout << "f" << endl;
            G.at(i + w - 1).push_back(i);
            G.at(i).push_back(i + w - 1);
            cout << "f" << endl;
        }
    }

    cout << "inpu ok." << endl;


    vector<vector<int>> distance_pair(w * h, vector<int>(w * h, -1));

    // 観光スポットから観光スポットへの最短距離を毎回BFSで求めて合計していく
    int answer = 0;
    // for (int i = 1; i < n;i++){
    for (int i = 1; i < 2; i++)
    {
        int start = (x.at(i - 1) - 1) + (y.at(i - 1) - 1) * w;
        int goal = (x.at(i) - 1) + (y.at(i) - 1) * w;

        cout << "start:" << start << ", goal:" << goal << endl;

        // bfsでスタートからゴールまでの距離を計算
        vector<int> dist(w * h - 1, -1);
        queue<int> que;

        dist[start] = 0;
        que.push(start);

        while (!que.empty())
        {
            // rep(j, w * h) { cout << dist[j] << ",";}
            // cout << endl;

            int v = que.front();
            que.pop();

            for (int nv : G.at(v))
            {
                if (dist.at(nv) != -1)
                    continue;

                dist.at(nv = dist.at(v)) + 1;
                que.push(nv);
            }
        }

        answer += distance_pair.at(start).at(goal);
        cout << "answer:" << answer << endl;
    }

    cout << answer << endl;
}