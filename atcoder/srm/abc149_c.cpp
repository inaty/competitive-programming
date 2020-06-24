#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

bool is_prime(const unsigned n){
    switch(n) {
        case 0: // fall-through
        case 1: return false;
        case 2: return true;
    } // n > 2 が保証された

    if(n % 2 == 0) return false;

    // 上で i=2 相当は調べたので、i=3から奇数のみ調べる
    for(unsigned i = 3; i * i <= n; i += 2) {
        if(n % i == 0) return false;
    }

    return true;
}


int main()
{
    int x;
    cin >> x;

    int i = x;
    while (true){
        if(is_prime(i)){
            cout << i << endl;
            break;
        }
        else
        {
            i++;
        }
    }
}