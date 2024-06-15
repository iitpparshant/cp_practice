#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    long long c[n];
    bool neg = 1;
    for (int i = 0; i < n; i++)
    {
      cin >> c[i];
      neg &= (c[i] < 0);
    }
    if (neg)
    {
      cout << *max_element(c, c + n);
    }
    else
    {

      long long sum1 = 0, sum2 = 0;
      for (int i = 0; i < n; i++)
      {
        if (c[i] > 0)
        {
          if (i % 2 == 0)
          {
            sum1 += c[i];
          }
          else
          {
            sum2 += c[i];
          }
        }
      }
      cout << max(sum1, sum2);
    }
    cout << endl;
  }
  return 0;
}