#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    cin >> s;

    map<string, string> mp;
    mp["WBWBWWBWBWBWWBWBWWBW"] = "Do";
    mp["WBWWBWBWBWWBWBWWBWBW"] = "Re";
    mp["WWBWBWBWWBWBWWBWBWBW"] = "Mi";
    mp["WBWBWBWWBWBWWBWBWBWW"] = "Fa";
    mp["WBWBWWBWBWWBWBWBWWBW"] = "So";
    mp["WBWWBWBWWBWBWBWWBWBW"] = "La";
    mp["WWBWBWWBWBWBWWBWBWWB"] = "Si";

    cout << mp[s] << endl;
}