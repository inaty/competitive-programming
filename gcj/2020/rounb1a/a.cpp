#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int find_ast_first_index(string s)
{
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s.at(i) == '*')
        {
            return i;
        }
    }
    return -1;
}

int find_ast_last_index(string s)
{
    for (int i = (int)s.size() - 1; i >= 0; i--)
    {
        if (s.at(i) == '*')
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<string> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p.at(i);
        }

        vector<string> pf(n, "");
        vector<string> pb(n, "");
        for (int i = 0; i < n; i++)
        {
            if (find_ast_first_index(p.at(i)) != -1)
            {
                pf.at(i) = p.at(i).substr(0, find_ast_first_index(p.at(i)));
                pb.at(i) = p.at(i).substr(find_ast_last_index(p.at(i))+1, int(p.at(i).size()) - 1);
            }
        }

        int int_max_len_pf = *max_element(pf.begin(), pf.end());
        int int_max_len_pb = *max_element(pb.begin(), pb.end());

        for (int i = 0; i < int_max_len_pf; i++)
        {
            char c;
            for (int j = 0; j < n; j++)
            {
                if(pf.at(j)!=""){
                    if (c==NULL && int(pf.at(j).size()) <= n){
                        c = pf.at(j).at(i);
                    }else if(int(pf.at(j).size())<=n){
                        if(c!=pf.at(j).at(i)){
                            cout << "Case #" << (i + 1) << ": " << "*" << endl;
                            return 0;
                        }
                    }
                }
            }
        }

        for (int i = 0; i < int_max_len_pb; i++)
        {
            char c;
            for (int j = 0; j < n; j++)
            {
                if(pf.at(j)!=""){
                    if (c==NULL && int(pb.at(j).size()) <= n){
                        c = pb.at(j).at(int(p.at(j).size())-1-i);
                    }else if(int(pb.at(j).size())<=n){
                        if(c!=pb.at(j).at(int(p.at(j).size())-1-i)){
                            cout << "Case #" << (i + 1) << ": " << "*" << endl;
                            return 0;
                        }
                    }
                }
            }
        }

        // for (int i = 0; i < n; i++)
        // {
            // cout << p.at(i) << " " << pf.at(i) << " " << pb.at(i) << endl;
            // cout << pf.at(i) << endl;
            // cout << find_ast_last_index(p.at(i)) << endl;
        // }

        // cout << "*" << endl;

        // cout << "Case #" << (i + 1) << ": " << k << " " << r << " " << c << endl;
    }
}