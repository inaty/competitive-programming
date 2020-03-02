#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> n(3);
    for(int i = 0;i<3;i++){
        cin >> n.at(i);
    }

    sort(n.begin(),n.end());

    for(int i = 0;i<3;i++){
        cout << n.at(i);
        if(i!=2){
            cout << " ";
        }else{
            cout << endl;
        }
    }
}