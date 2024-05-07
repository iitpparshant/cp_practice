#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long mod = 1000000007;
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}
long long powermod(long long x, long long y, long long p)
{
    long long res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if (isPowerOfTwo(k))
        {
            cout << powermod(n, ceil(log2(k)), mod) << "\n";
        }
        else
        {
            long long c = 0;
            while (k > 0)
            {
                if (k == 1)
                {
                    c++;
                    k = 0;
                }
                else if (k == 2)
                {
                    c += n % mod;
                    k = 0;
                }
                else if (k == 3)
                {
                    c += (n + 1) % mod;
                    k = 0;
                }
                else if (isPowerOfTwo(k))
                {
                    c += powermod(n, ceil(log2(k)), mod);
                    k = 0;
                }
                else
                {
                    long long x = pow(2, floor(log2(k)));
                    c += powermod(n, floor(log2(k)), mod);
                    k -= x;
                }
            }
            cout << c % mod << "\n";
        }
    }
    return 0;
}