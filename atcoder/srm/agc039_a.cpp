#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

// 端の部分の連結する部分と、それ以外の連結する部分を探して計算
// 連続数の/2切り上げ数だけ書き換えればOK
// 端の部分は繰り返し処理-1、それ以外は繰り返し処理回数回書き換えればOK
int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;

    int answer = 0;


    // 端の部分の処理
    int continuous_length = 1;
    for (int i = int(s.size()) - 2; i >= 0;i--){
        if(s.at(int(s.size())-1)!=s.at(i)){
            break;
        }else{
            continuous_length++;
        }
    }
    if(s.at(0)==s.at(int(s.size())-1)){
        for (int i = 0; i < int(s.size()) - 2;i++){
            if(s.at(int(s.size())-1)!=s.at(i)){
                break;
            }else{
                continuous_length++;
            }
        }
    }

}