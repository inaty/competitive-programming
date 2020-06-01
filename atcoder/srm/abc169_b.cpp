#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int digit_length(ll n)
{
    return int(to_string(n).size());
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a.at(i);

    ll mod_num = 1000000000000000000;

    for (ll i = 0; i < n; i++)
    {
        if(a.at(i)==0){
            cout << 0 << endl;
            return 0;
        }
    }

    ll answer = a.at(0);
    for (ll i = 1; i < n; i++)
    {
        if(a.at(i)==0){
            answer = 0;
            break;
        }
        // cout << answer << " " << a.at(i) << " " << log10(double(answer)) + log10(double(a.at(i))) << endl;
        if (log10(double(answer)) + log10(double(a.at(i))) >= 18.0)
        {
            if (answer * a.at(i) != mod_num)
            {
                answer = -1;
                break;
            }
        }
        answer *= a.at(i);
        if (log10(double(answer)) >= 18.0)
        {
            if (answer != mod_num)
            {
                answer = -1;
                break;
            }
        }
    }
    cout << answer << endl;
    return 0;
}
