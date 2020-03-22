#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const ll MOD = 1e9 + 7;
const long long INF = 1LL << 60;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> a(m), b(m);
    rep(i, m) cin >> a.at(i) >> b.at(i);

    set<int> friends, invitation;
    // 直接の友達
    rep(i, m)
    {
        if (a.at(i) == 1)
            friends.insert(b.at(i));
        if (b.at(i) == 1)
            friends.insert(a.at(i));
    }

    invitation = friends;
    // 招待するメンバー
    rep(i, m)
    {
        if (friends.count(a.at(i)) != 0)
            invitation.insert(b.at(i));
        if (friends.count(b.at(i)) != 0)
            invitation.insert(a.at(i));
    }

    int answer = 0;
    for (auto itr = invitation.begin(); itr != invitation.end(); itr++)
    {
        if (*itr != 1)
            answer++;
    }

    cout << answer << endl;
}