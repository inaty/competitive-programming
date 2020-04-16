#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    string search_string;
    cin >> search_string;
    int n;
    cin >> n;
    vector<string> rings(n);
    rep(i, n) cin >> rings.at(i);

    int answer = 0;
    rep(i,n){
        if((rings.at(i)+rings.at(i)).find(search_string) != string::npos)
            answer++;
    }

    cout << answer << endl;
}