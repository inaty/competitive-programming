#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

bool is_kaibun(string s){
    int n = (int) s.size();
    for(int i = 0;i<n/2;i++){
        if(s.at(i)!=s.at(n-1-i)){
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    string answer = "Yes";
    for(int i = 0;i<((int)s.size())/2;i++){
        if(s.at(i)!=s.at(((int)s.size())-1-i)){
            answer = "No";
            cout << answer << endl;
            return 0;
        }
    }

    int n = (int) s.size();
    for(int i = 0;i<(n-1)/2/2;i++){
        if(s.at(i)!=s.at((n-1)/2-1-i)){
            answer = "No";
            cout << answer << endl;
            return 0;
        }
    }


    if(is_kaibun(s.substr((n+3)/2-1, n-(n+3)/2+1)) == false){
        answer = "No";
        cout << answer << endl;
        return 0;
    }

    cout << answer << endl;
    return 0;

}