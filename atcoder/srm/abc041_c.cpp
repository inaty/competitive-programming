#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef pair<int, int> ipair;
bool lessPair(const ipair &l, const ipair &r) { return l.second < r.second; }
bool greaterPair(const ipair &l, const ipair &r) { return l.second > r.second; }

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    vector<ipair> x;

    rep(i, n) x.push_back(ipair(i + 1, a.at(i)));

    sort(x.begin(), x.end(), greaterPair);

    for (vector<ipair>::iterator it = x.begin(); it != x.end(); it++)
    {
        cout << it->first << endl;
    }
}