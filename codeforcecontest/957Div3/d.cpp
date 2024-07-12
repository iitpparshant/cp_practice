#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    int count = 0;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'C')
      {
        count++;
      }
      else
      {
        if (count >= m)
        {
          flag=0;
          break;
        }
        count=0;
      }
    }
    count=0;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'W')
      {
        count++;
      }
      else
      {
        if (count >= m+k)
        {
          flag=0;
          break;
        }
        count=0;
      }
    }
    for(int i=0;i<n;i++){
      if(s[i]=='C'){
        int j=i-1;
        int in=0;
        while(j>=0 && s[j]!='L'){
          j--;
          in++;
        }
        
      }
    }
  }
  return 0;
}