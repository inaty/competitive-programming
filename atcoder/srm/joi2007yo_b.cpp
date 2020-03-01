#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    set<int> st;
    for (int i = 1;i<=30;i++){
        st.insert(i);
    }

    for (int i = 0; i < 28;i++){
        int a;
        cin >> a;
        st.erase(a);
    }

    for (auto itr = st.begin(); itr != st.end();itr++){
        cout << *itr << endl;
    }
}