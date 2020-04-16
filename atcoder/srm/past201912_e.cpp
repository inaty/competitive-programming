#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;


vector<string> split(string s){
    vector<string> res;
    int count = 0;
    for(int i = 0;i<s.size();i++){
        if(s.at(i)==' '){
            res.push_back(s.substr(i-count,count));
        }else{
            count++;
        }
    }
    return res;
}

int main() {
    int n,q;
    cin >> n >> q;

    // フォローした人
    vector<set<int>> following(n);

    rep(i,q){
        int s0;
        cin >> s0;

        if(s0==1){
            int a,b;
            cin >> a >> b;
            a--;
            b--;
            following.at(a).insert(b);
        }else if(s0==2){
            int a;
            cin >> a;
            a--;
            for(int b = 0;b<n;b++){
                if(a!=b && following.at(b).count(a)!=0){
                    following.at(a).insert(b);
                }
            }
        }else if(s0==3){
            int a;
            cin >> a;
            a--;
            set<int> add_members;
            for(auto itr=following.at(a).begin();itr!=following.at(a).end();itr++){
                int x = *itr;
                for(auto itr2=following.at(x).begin();itr2!=following.at(x).end();itr2++){
                    int b = *itr2;
                    add_members.insert(b);
                }
            }
            for(auto itr=add_members.begin();itr!=add_members.end();itr++){
                int b = *itr;
                if(b!=a) following.at(a).insert(b);
            }
        }
    }

    for(int a = 0;a<n;a++){
        for(int b = 0;b<n;b++){
            if(following.at(a).count(b)==0){
                cout << "N";
            }else{
                cout << "Y";
            }
        }
        cout << endl;
    }
}