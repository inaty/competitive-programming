#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    sort(a.begin(), a.end(), greater<int>());

    int sum_a = 0;
    rep(i, n) sum_a += a.at(i);

    if(a.at(m-1)>=sum_a/4.0/m){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}