#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    set<int> st;
    rep(i, n)
    {
        if (st.count(a.at(i)) == 0)
        {
            st.insert(a.at(i));
        }
        else
        {
            st.erase(a.at(i));
        }
    }

    cout << int(st.size()) << endl;
}