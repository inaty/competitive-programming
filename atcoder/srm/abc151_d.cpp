#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;

// North, west, south, east
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, -1, 0, 1};

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> maze(h, vector<char>(w));
    rep(i, h)
    {
        rep(j, w)
        {
            cin >> maze.at(i).at(j);
        }
    }

    int answer = 0;
    for (int sy = 0; sy < h; sy++)
    {
        for (int sx = 0; sx < w; sx++)
        {
            for (int gy = 0; gy < h; gy++)
            {
                for (int gx = 0; gx < w; gx++)
                {
                    if (sy == gy && sx == gx)
                    {
                        continue;
                    }
                    if (maze.at(sy).at(sx) == '#')
                    {
                        continue;
                    }
                    if (maze.at(gy).at(gx) == '#')
                    {
                        continue;
                    }

                    // cout << "path:" << sx << " " << sy << " " << gx << " " << gy << endl;
                    // cout << maze.at(sy).at(sx) << "->" << maze.at(gy).at(gx) << endl;

                    std::queue<std::pair<int, int>> que;

                    std::vector<std::vector<int>> distance(h, std::vector<int>(w, -100));

                    distance[sy][sx] = 0;

                    que.push({sy, sx});

                    while (que.size())
                    {
                        int y, x;
                        std::tie(y, x) = que.front();

                        que.pop();
                        for (int i = 0; i < 4; i++)
                        {
                            int ny = y + dy[i];
                            int nx = x + dx[i];

                            if (ny < 0 || ny >= h || nx < 0 || nx >= w || maze[ny][nx] == '#' || distance[ny][nx] != -100)
                            {
                                continue;
                            }

                            distance[ny][nx] = distance[y][x] + 1;
                            que.push({ny, nx});
                        }
                    }

                    answer = max(answer, distance[gy][gx]);

                    // cout << "pathend:" << sx << " " << sy << " " << gx << " " << gy << endl;
                }
            }
        }
    }

    cout << answer << endl;

    // rep(i, h)
    // {
    //     rep(j, w)
    //     {
    //         cout << s.at(i).at(j);
    //     }
    //     cout << endl;
    // }
}