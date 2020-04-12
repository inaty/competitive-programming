#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    int n,m;
    cin >> n >> m;
    vector<string> national_flag(n);
    rep(i,n) cin >> national_flag.at(i);

    vector<int> white_count(n,0),blue_count(n,0),red_count(n,0);
    rep(i,n){
        rep(j,m){
            if(national_flag.at(i).at(j)=='W') white_count.at(i)++;
            if(national_flag.at(i).at(j)=='B') blue_count.at(i)++;
            if(national_flag.at(i).at(j)=='R') red_count.at(i)++;
        }
    }

    int answer = INT_MAX;

    // 青のマスがどの行からどの行までになるか全探索
    for(int blue_position_start = 1;blue_position_start < n-1; blue_position_start++){
        for(int blue_position_end = blue_position_start;blue_position_end < n-1; blue_position_end++){
            int temp_answer = (m-white_count.at(0))+(m-red_count.at(n-1)); // 1番上と下はそれぞれ白と赤で塗る
            // 2行目からn-1行目までに塗る色を計算
            for(int i = 1; i<n-1;i++){
                if(i<blue_position_start){temp_answer += m - white_count.at(i);}
                else if(i>blue_position_end){temp_answer += m - red_count.at(i);}
                else{temp_answer += m - blue_count.at(i);}
            }

            answer = min(answer,temp_answer);
        }
    }

    cout << answer << endl;
}