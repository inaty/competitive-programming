#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD=1e9+7;
const long long INF = 1LL<<60;

int main() {
    string s;
    cin >> s;

    string u_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    set<char> mp_u_letters;
    rep(i,u_letters.size()){
        mp_u_letters.insert(u_letters.at(i));
    }

    vector<string> keywords;
    int u_count = 0;
    string keyword;
    rep(i,s.size()){
        if(mp_u_letters.count(s.at(i))!=0) u_count++;
        if(u_count%2==0){
            keyword.push_back(s.at(i));
            transform (keyword.begin (), keyword.end (), keyword.begin (), ::tolower);
            keywords.push_back(keyword);
            keyword = "";
        }else if(u_count%2==1){
            keyword.push_back(s.at(i));
        }

    }

    sort(keywords.begin(),keywords.end());

    string answer;
    for(auto itr=keywords.begin();itr!=keywords.end();itr++){
        string temp_word = *itr;
        transform(temp_word.begin(),temp_word.begin()+1,temp_word.begin(),::toupper);
        transform(temp_word.end()-1,temp_word.end(),temp_word.end()-1,::toupper);
        answer += temp_word;
    }

    cout << answer << endl;

}