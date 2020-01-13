#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> t(n);
    rep(i,n){
        cin >> s.at(i);
        cin >> t.at(i);
    }
    string x;
    cin >> x;

    int answer = 0;
    bool is_sleep = false;
    rep(i, n)
    {
        if(is_sleep)
            answer += t.at(i);
        if (s.at(i) == x)
        {
            is_sleep = true;
        }
    }

    cout << answer << endl;
}