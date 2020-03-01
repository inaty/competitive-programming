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

int main()
{
    string s;
    cin >> s;

    string AKIHABARA = "AKIHABARA";
    string KIHBR = "KIHBR";

    string s_r;
    for (int i = 0; i < int(s.size()); i++)
    {
        if (s.at(i) != 'A')
            s_r += s.at(i);
    }

    if (s_r != KIHBR)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool ok = true;
    int cnt = 0;
    for (int i = 0; i < int(s.size()); i++)
    {
        if (s.at(i) == AKIHABARA.at(cnt))
            cnt++;
        else if (AKIHABARA.at(cnt)=='A'){
            cnt++;
            if(AKIHABARA.at(cnt)==s.at(i))
                cnt++;
            else
                ok == false;
        }else{
            ok == false;
        }
    }
    if(ok&&cnt>=8)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}