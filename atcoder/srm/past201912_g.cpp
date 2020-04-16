#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n,0));

    for(int i = 1;i<n;i++){
        for(int j = i+1;j<=n;j++){
            cin >> a.at(i-1).at(j-1);
        }
    }

    int answer = - INT_MAX;
    for(int state = 0;state<pow(3,n);state++){
            int tmp_score = 0;
            int tmp = state;
            vector<int> group_no;
            for(int i = 0;i<n;i++){
                group_no.push_back(tmp%3);
                tmp/=3;
            }

            for(int i = 0;i<n;i++){
                for(int j = 0;j<n;j++){
                    if(a.at(i).at(j)!=0){
                        if(group_no.at(i)==group_no.at(j)){
                            tmp_score+=a.at(i).at(j);
                        }
                    }
                }
            }

            answer = max(answer, tmp_score);
    }

    cout << answer << endl;
}