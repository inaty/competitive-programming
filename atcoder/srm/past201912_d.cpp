#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);

    map<int,int> mp;
    rep(i,n) mp[a.at(i)]++;

    int x = -1, y = -1;
    for(int i = 1;i<n+1;i++){
        if(mp[i]==0) x = i;
        if(mp[i]==2) y = i;
    }

    if(x==-1 || y==-1){
        cout << "Correct" << endl;
    }else{
        cout << y << " " << x << endl;
    }
}