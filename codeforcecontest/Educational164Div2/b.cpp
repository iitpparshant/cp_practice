#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    int ans = INT_MAX;
    // int i = 0;
    // int j = 0;
    for (int r = 0; r < m; r++)
    {
      for (int c = 0; c < n; c++)
      {
        int i=r;
        int j=c;
        if (b[i] == a[j])
        {
          // cout << i << " " << j << "mmm";
          int count = 0;
          while (j < n && i < m)
          {
            if (b[i] == a[j])
            {
              i++;
              count++;
              j++;
            }
            else
            {
              j++;
            }
          }
          ans = min(ans, n + m - count);
        }
      }
    }

    if(ans==INT_MAX){
      ans=n+m;
    }
    cout << ans<<endl;;
  }
  return 0;
}