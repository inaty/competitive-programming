#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

bool is_lunlun(ll n){
    if(n==1)
        return true;
    string str_n = to_string(n);
    int digit_num = int(str_n.size());
    for (int i = 1; i < digit_num;i++){
        if(abs((str_n.at(i-1)-'0')-(str_n.at(i)-'0'))>=2)
            return false;
    }
    return true;
}

bool is_digit_max(ll n){
    string str_n = to_string(n);
    for (int i = 0; i < str_n.size();i++){
        if(str_n.at(i)-'0'<=8){
            return false;
        }
    }
    return true;
}

int main()
{
    ll k;
    cin >> k;

    string str_num = '1';
    ll cnt = 1;
    while(true){
        int len = str_num.size();
        if(is_digit_max(str_num)){
            cnt++;
            str_num = '1';
            rep(i, len) str_num.push_back('0');
        }else{
            rep(i,len){
                if(str_num.at(i)-'0'=='9'){
                    continue;
                } else if(str_num.at(i) = str_num.)
            }
        }
    }





    for (ll i = 1; i < 1000000000000; i++)
    {
        if(is_lunlun(i)){
            cnt++;
            cout << k << ":" << i << endl;
        }
        if (cnt == k)
        {
            cout << i << endl;
            return 0;
        }
    }
}