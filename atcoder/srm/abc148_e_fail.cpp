#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long f(long long n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return n * f(n - 2);
    }
}

long long divid_5_num(long long x)
{
    long long res = 0l;
    while (x >= 5l)
    {
        res++;
        x = x / 5l;
    }
    return res;
}

long long digit_num(long long x)
{
    long long res = 0l;
    while (x >= 10l)
    {
        if (x % 10l == 0l)
        {
            res++;
        }
        else
        {
            break;
        }
        x = x / 10l;
    }
    return res;
}

long long g(long long n)
{
    if (n < 2l)
    {
        return 0L;
    }
    else
    {
        return digit_num(n) + g(n - 2);
    }
}

long long g2(long long n)
{

    long long res = 0l;
    long long divides_num = 10l;
    if (n < 2l)
    {
        return 0l;
    }
    else if (n % 2l == 1l)
    {
        return 0l;
    }
    else
    {
        for (int i = 0; i < 18; i++)
        {
            // cout << n << " " << i << " " << divides_num << " " << n / divides_num << endl;
            res += n / divides_num;
            divides_num = divides_num * 10l;
        }
        return res;
    }
}

int main()
{
    long long n;
    cin >> n;

    if (n % 2l == 1l)
    {
        cout << 0 << endl;
    }
    else
    {
        // cout << g2(n) << endl;
        for (long long i = 0; i < 1000; i += 2l)
        {
            cout << i << " " << divid_5_num(i) << endl;
            // cout << g(n) << endl;
            // cout << g2(n) << endl;
            // cout << i << " " << f(i) << " " << digit_num(f(i)) << " " << g(i) << " " << g2(i) << endl;
            // cout << i << " " << g(i) << " " << g2(i) << " | " << divid_5_num(i) << endl;
        }
    }
}