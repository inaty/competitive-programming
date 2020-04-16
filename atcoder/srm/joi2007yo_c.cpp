#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    string before = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string after = "DEFGHIJKLMNOPQRSTUVWXYZABC";

    string origin;
    cin >> origin;
    string answer;

    rep(i,(int)(origin.size())){
        rep(j,26){
            if(origin.at(i)==after.at(j)){
                answer.push_back(before.at(j));
                break;
            }
        }
    }

    cout << answer << endl;
}