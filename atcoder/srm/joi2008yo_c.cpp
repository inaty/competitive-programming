#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    int n;
    cin >> n;
    set<int> taro,hanako;
    rep(i,n){
        int num;
        cin >> num;
        taro.insert(num);
    }

    for(int i = 1;i<=2*n;i++){
        if(taro.count(i)==0){
            hanako.insert(i);
        }
    }

    vector<int> taro_v(n),hanako_v(n);
    for(auto itr=taro.begin();itr!=taro.end();itr++){
        taro_v.push_back(*itr);
    }
    for(auto itr=hanako.begin();itr!=hanako.end();itr++){
        hanako_v.push_back(-*itr);
    }
    sort(taro_v.begin(),taro_v.end());
    sort(hanako_v.begin(),hanako_v.end());

    int ba = NULL;
    while(taro_v.size()!=0 && hanako_v.size()!=0){
        if(ba==NULL){
            
        }
    }
}