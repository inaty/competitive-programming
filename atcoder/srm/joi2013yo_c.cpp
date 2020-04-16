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
    string shop_name;
    cin >> shop_name;
    vector<string> signboard(n);
    rep(i, n) cin >> signboard.at(i);

    int answer = 0;
    rep(i, n)
    {
        bool is_ok = false;
        for (int head = 0; head < signboard.at(i).size(); head++)
        {
            for (int period = 1; head + period < signboard.at(i).size(); period++)
            {
                int count = 0;
                for (int j = head; j < signboard.at(i).size(); j += period)
                {
                    // cout << "i:" << i << ", head:" << head << ", period:" << period << ", j:" << j << ", count:" << count << endl;
                    // cout << signboard.at(i).size() << endl;
                    if(count > shop_name.size()-1)
                        break;
                    if (signboard.at(i).at(j) == shop_name.at(count))
                    {
                        count++;
                    }
                }
                if (count == shop_name.size())
                {
                    cout << "i:" << i << ", head:" << head << ", period:" << period << ", count:" << count << endl;
                    is_ok = true;
                }
                if(is_ok)
                    break;
            }
            if(is_ok)
                break;
        }
        if(is_ok)
            answer++;
    }
    cout << answer << endl;
}