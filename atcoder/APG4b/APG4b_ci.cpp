#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int max_value = max(max(A, B), C);
    int min_value = min(min(A, B), C);

    cout << max_value - min_value << endl;
}
