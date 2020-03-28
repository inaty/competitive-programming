#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    string s;
    cin >> s;

    if(s.at(2)==s.at(3) && s.at(4)==s.at(5)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}