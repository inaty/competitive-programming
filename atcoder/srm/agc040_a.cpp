#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    string s;
    cin >> s;

    int n = int(s.size()) + 1;

    vector<int> l(n,0), r(n,0);
    int tmp = 0;
    for (int i = 1; i < n;i++)
    {
        if(s.at(i-1)=='<')
            tmp++;
        l.at(i) = tmp;
    }
    tmp = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if(s.at(i)=='>')
            tmp++;
        r.at(i) = tmp;
    }

    vector<int> x(n);
    rep(i,n){
        x.at(i) = max(l.at(i), r.at(i));
    }

    // vector<int> x(n);
    // x.at(0) = 0;
    // for (int i = 1; i < n; i++)
    // {
    //     if (s.at(i-1) == '<')
    //     {
    //         x.at(i) = x.at(i - 1) + 1;
    //     }
    //     else
    //     {
    //         x.at(i) = x.at(i - 1) - 1;
    //     }
    // }

    // int min_v = INT_MAX;
    // int min_v_index = 0;
    // rep(i, n)
    // {
    //     if(min_v>x.at(i)){
    //         min_v = x.at(i);
    //         min_v_index = i;
    //     }
    // }

    // cout << min_v_index << endl;

    // vector<int> y(n);
    // y.at(min_v_index) = 0;
    // for (int i = min_v_index; i < n;i++){
    //     if (s.at(i-1) == '<')
    //     {
    //         y.at(i) = y.at(i - 1) + 1;
    //     }
    //     else
    //     {
    //         y.at(i) = y.at(i - 1) - 1;
    //     }
    // }

    // for (int i = min_v_index; i >= 0;i--){
    //     if (s.at(i-1) == '<')
    //     {
    //         y.at(i) = y.at(i - 1) + 1;
    //     }
    //     else
    //     {
    //         y.at(i) = y.at(i - 1) - 1;
    //     }
    // }

   rep(i,n){
        // x.at(i) -= min_v;
        cout << x.at(i) << " ";
    }
    cout << endl;

//    rep(i,n){
//         cout << y.at(i) << " ";
//     }
//     cout << endl;
}