#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int cut_block(vector<string> s, int k){
    int white_count = 0;
    for(int i = 0;i<s.size();i++){
        for(int j = 0;j<s.at(0).size();j++){
            if(s.at(i).at(j)=='1') white_count++;
        }
    }

    if(white_count==0){
        // return あとで考える
    }

    int diff = INT_MAX;
    bool is_vertical_line = false;
    bool is_horizontal_line = false;
    for(int i = 1;i<s.size()-1;i++){
        int right_count = 0, left_count=0;
        for(int j = 0;j<i;j++){
            for(int k = 0;k<s.at(0).size();j++){
                if(s.at(k).at(j)=='1') left_count++;
            }
        }
        for(int j = i;j<s.at(0).size();j++){
            for(int k = 0;k<s.at(0).size();j++){
                if(s.at(k).at(j)=='1') right_count++;
            }
        }
        if(diff < abs(right_count-left_count)){
            is_vertical_line = true;
            is_horizontal_line = false;
            diff = abs(right_count-left_count);
        }
    }
    for(int j = 1;j<s.at(0).size()-1;j++){
        int top_count = 0, bottom_count=0;
        for(int i = 0;i<j;i++){
            for(int k = 0;k<s.size();j++){
                if(s.at(k).at(j)=='1') left_count++;
            }
        }
        for(int j = i;j<s.at(0).size();j++){
            for(int k = 0;k<s.at(0).size();j++){
                if(s.at(i).at(j)=='1') right_count++;
            }
        }
        if(diff < abs(right_count-left_count)){
            is_vertical_line = true;
            is_horizontal_line = false;
            diff = abs(right_count-left_count);
        }
    }
}

int main() {
    int h,w,k;
    cin >> h >> w >> k;
    vector<string> s(h);
    rep(i,h) cin >> s.at(i);


}