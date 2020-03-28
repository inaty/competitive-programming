#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    ll n;
    cin >> n;
    vector<ll> c(n);
    for(ll i = 0;i<n;i++) cin >> c.at(i);
    ll q;
    cin >> q;

    int answer = 0;
    for(ll i = 0;i<q;i++){
        int s0;
        cin >> s0;
        if(s0==1){
            int x, a;
            cin >> x >> a;
            if(c.at(x-1)>=a){
                answer += a;
                c.at(x-1)-=a;
            }
        }else if(s0==2){
            int a;
            cin >> a;
            bool is_ok = true;
            for(int i = 0;i<n;i++){
                if((i+1)%2==1){
                    if(c.at(i)<a){
                        is_ok = false;
                        break;
                    }
                }
            }
            for(int i = 0;i<n;i++){
                if((i+1)%2==1 && is_ok){
                    answer += a;
                    c.at(i)-= a;
                }
            }
        }else if(s0==3){
            int a;
            cin >> a;
             bool is_ok = true;
            for(int i = 0;i<n;i++){
                if(c.at(i)<a){
                    is_ok = false;
                    break;
                }
            }
            for(int i = 0;i<n;i++){
                if(is_ok){
                    answer += a;
                    c.at(i)-= a;
                }
            }
        }
    }
    cout << answer << endl;
}