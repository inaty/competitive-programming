#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    string s;
    cin >> s;

    set<int> numbers{'0','1','2','3','4','5','6','7','8','9'};

    rep(i,3){
        if(numbers.count(s.at(i))==0){
            cout << "error" << endl;
            return 0;
        }
    }

    int answer = 0;
    int digit = 1;
    reverse(s.begin(),s.end());
    rep(i,3){
        answer += (s.at(i) - '0') * digit * 2;
        digit *= 10;
    }

    cout << answer << endl;
    return 0;
}