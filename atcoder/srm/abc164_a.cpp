#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int s, w;
    cin >> s >> w;

    if(w>=s){
        cout << "unsafe" << endl;
    }else{
        cout << "safe" << endl;
    }
}