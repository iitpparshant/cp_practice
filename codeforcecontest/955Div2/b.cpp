#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long x, y, k;
    cin >> x >> y >> k;
    long long z = y - x % y;
    while (k >= z)
    {
      k -= z;
      x += z;
      while (x % y == 0)
      {
        x = x / y;
      }
      z=y-x%y;
      if(x==1){
        k=k%z;
        x+=k;
        k=0;
        break;
      }
    }
    
    cout << x+k<< endl;
  }
  return 0;
}