#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    int x,y,a,b,c;
    cin >> x >> y >> a >> b >> c;
    vector<int> p(a),q(b),r(c);
    rep(i,a){ cin >> p.at(i);}
    rep(i,b){ cin >> q.at(i);}
    rep(i,c){ cin >> r.at(i);}

    sort(p.begin(),p.end(),greater<int>());
    sort(q.begin(),q.end(),greater<int>());
    sort(r.begin(),r.end(),greater<int>());

    std::priority_queue<int> eat_p,eat_q;

    ll answer = 0;
    for(int i = 0;i<x;i++){
        answer += p.at(i);
        eat_p.push(p.at(i));
    }
    for(int i = 0;i<y;i++){
        answer += q.at(i);
        eat_q.push(q.at(i));
    }

    for(int i = 0;i<c;i++){
        if(eat_p.top()<eat_q.top()){
            if(r.at(i)>eat_p.top()){
                answer += r.at(i) - eat_p.top();
                eat_p.pop();
            }else if(r.at(i)>eat_q.top()){
                answer += r.at(i) - eat_q.top();
                eat_q.pop();
            }
        }else{
            if(r.at(i)>eat_q.top()){
                answer += r.at(i) - eat_q.top();
                eat_q.pop();
            }else if(r.at(i)>eat_p.top()){
                answer += r.at(i) - eat_p.top();
                eat_p.pop();
            }
        }
    }
    cout << answer << endl;

}