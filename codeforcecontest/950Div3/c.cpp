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
    unordered_map<int, int> mp;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
      if (a[i] != b[i])
      {
        mp[b[i]]++;
      }
      // cout << mp[b[i]]<<" ";
    }
    int m;
    cin >> m;
    int c[m];
    for (int i = 0; i < m; i++)
    {
      cin >> c[i];
      // cout<<mp[c[i]];
      if (mp[c[i]] > 0)
      {
        mp[c[i]]--;
      }
    }
    int flag = false;
    for (auto it : mp)
    {
      // cout<<it.first<<it.second<<" ";
      if (it.second > 0)
      {
        flag = true;
      }
    }
    if (flag == true)
    {
      cout << "NO";
    }
    else
    {
      bool f = false;
      for (int i = 0; i < n; i++)
      {
        if (c[m - 1] == b[i])
        {
          f = true;
          cout << "YES";
          break;
        }
      }
      if (f == false)
      {
        cout << "NO";
      }
    }
    cout << endl;
  }
  return 0;
}