#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    int n,x,y;
    cin >> n >> x >> y;

    // 隣接関係を表すグラフ
    using Graph = vector<vector<int>>;
    Graph G(n);
    for(int i = 0;i<n-1;i++){
        G[i+1].push_back(i);
        G[i].push_back(i+1);
    }
    G[x-1].push_back(y-1);
    G[y-1].push_back(x-1);

    vector<vector<int>> distance_pair(n,vector<int>(n,-1));

    // 各点ごとにBFSをして各点から各点への距離を計算する
    for(int i = 0;i<n;i++){
        // BFSを行うために必要な道具
        vector<int> dist(n,-1);
        queue<int> que;

        // 初期状態(iから辿った距離を計算するので、iを初期点とする)
        dist[i]=0;
        que.push(i);

        // BFS
        while(!que.empty()){
            int v = que.front();
            que.pop();

            for(int nv:G[v]){
                if(dist[nv]!=-1) continue; // 発見済みの頂点は探索しない

                // 新規発見した頂点nvに関しては距離情報を更新後キューに追加する
                dist[nv] = dist[v]+1;
                que.push(nv);
            }
        }

        for(int v=0;v<n;++v){
            distance_pair.at(i).at(v)=dist[v];
        }
    }

    map<int,int> answers_double;
    for(int k = 1;k<n;k++){
        answers_double[k]=0;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            answers_double[distance_pair.at(i).at(j)]++;
        }
    }

    for(int k = 1;k<=n-1;k++){
        cout << answers_double[k]/2 << endl;
    }
}