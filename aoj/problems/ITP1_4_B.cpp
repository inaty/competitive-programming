#include <bits/stdc++.h>
using namespace std;

int main()
{
    double pi = 3.141592653589;
    double f;
    cin >> f;

    double s = f * f * pi;
    double l = 2 * f * pi;

    printf("%.6lf %.6lf", s, l);
}