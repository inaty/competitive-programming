#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    vector<int> as(3), ae(3), bs(3), be(3), cs(3), ce(3);
    rep(i, 3) cin >> as.at(i);
    rep(i, 3) cin >> ae.at(i);
    rep(i, 3) cin >> bs.at(i);
    rep(i, 3) cin >> be.at(i);
    rep(i, 3) cin >> cs.at(i);
    rep(i, 3) cin >> ce.at(i);

    int mina, minb, minc;
    mina = ae.at(0) * 3600 + ae.at(1) * 60 + ae.at(2) - as.at(0) * 3600 - as.at(1) * 60 - as.at(2);
    minb = be.at(0) * 3600 + be.at(1) * 60 + be.at(2) - bs.at(0) * 3600 - bs.at(1) * 60 - bs.at(2);
    minc = ce.at(0) * 3600 + ce.at(1) * 60 + ce.at(2) - cs.at(0) * 3600 - cs.at(1) * 60 - cs.at(2);

    cout << mina / 3600 << " " << (mina - mina / 3600 * 3600) / 60 << " " << mina - mina / 60 * 60 << endl;
    cout << minb / 3600 << " " << (minb - minb / 3600 * 3600) / 60 << " " << minb - minb / 60 * 60 << endl;
    cout << minc / 3600 << " " << (minc - minc / 3600 * 3600) / 60 << " " << minc - minc / 60 * 60 << endl;
}