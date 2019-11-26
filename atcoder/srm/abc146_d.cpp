#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n - 1), b(n - 1);
    rep(i, n - 1) cin >> a.at(i) >> b.at(i);

    vector<int> edge_count(n, 0);

    rep(i, n - 1)
    {
        edge_count.at(a.at(i) - 1) += 1;
        edge_count.at(b.at(i) - 1) += 1;
    }

    int max_count_edge = *max_element(edge_count.begin(), edge_count.end());

    vector<int> color(n, 0);
}