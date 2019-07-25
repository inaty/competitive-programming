#include <bits/stdc++.h>

using namespace std;
    

int main(int argc, char const *argv[])
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    
    if(abs(a-c) <= d){
        cout << "Yes" << endl;
        return 0;
    }
    if(abs(b-a) <= d and abs(c-b) <= d){
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}
